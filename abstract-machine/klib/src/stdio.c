#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void itoa(int n, char *str, int radix) {
  int i = 0;
  // 十六进制不处理符号位
  if(radix != 16) {
    int sign = n;
    if(sign < 0) n = -n;
    do {
      int digit = n % radix;
      str[i++] = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
    } while((n /= radix) != 0);
    if(sign < 0) str[i++] = '-';
  } else {
    // 十六进制直接处理无符号值
    unsigned un = (unsigned)n;
    do {
      int digit = un % radix;
      str[i++] = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
    } while((un /= radix) != 0);
  }
  str[i] = '\0';
  char reverse[100] = {'\0'};
  for (int j = 0; j < i; j++) {
    reverse[j] = str[i - j - 1];
  }
  for (int j = 0; j < i; j++) {
    str[j] = reverse[j];
  }
}

int vprintf(void (*putch)(char), const char *fmt, va_list ap) {
  char tmp[100] = {'\0'};
  int pos = 0;
  for( ; *fmt; fmt++) {
    if(*fmt != '%') {
      putch(*fmt);
      pos++;
      continue;
    }
    fmt++;
    pos++;
    switch(*fmt) {
      case 'd': 
        itoa(va_arg(ap, int), tmp, 10);
        for(int i = 0; i < strlen(tmp); i++) {
          putch(tmp[i]);
          pos++;
        }
        break;
      case 'x':
        itoa(va_arg(ap, int), tmp, 16);
        for(int i = 0; i < strlen(tmp); i++) {
          putch(tmp[i]);
          pos++;
        }
        break;
      case 's':
        char *s = va_arg(ap, char *);
        while(*s) {
          putch(*(s++));
          pos++;
        }
        break;
      case 'c':
        char *s_ = va_arg(ap, char *);
        while(*s_) {
          putch(*(s_++));
          pos++;
        }
        break;
      case '0':
        int width;
        fmt++;
        width =  *fmt - '0';
        fmt ++;
        if(*fmt == 'd')
        {
          itoa(va_arg(ap, int), tmp, 10);
        }
        else if(*fmt == 'x')
        {
          itoa(va_arg(ap, int), tmp, 16);
        }
        for(int i = 0; i < width - strlen(tmp); i++) {
          putch(' ');
          pos++;
        }
        for(int i = 0; i < strlen(tmp); i++) {
          putch(tmp[i]);
          pos++;
        }
        break;
      default:
        assert(0);
        break;
    }
    for(int i = 0; i < 100; i++) {
      tmp[i] = '\0';
    }
  }
  return pos;
}

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int len = vprintf(putch, fmt, ap);
  va_end(ap);
  return len;
  //panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  char *str;
  char tmp[100] = {'\0'};
  for(str = out; *fmt; fmt++) {
    if(*fmt != '%') {
      *(str++) = *fmt;
      continue;
    }
    fmt++;
    switch(*fmt) {
      case 'd': 
        itoa(va_arg(ap, int), tmp, 10);
        //assert((strcmp(tmp, "1") == 0)||(strcmp(tmp, "2") == 0)||(strcmp(tmp, "12") == 0)||(strcmp(tmp, "10") == 0));
        break;
      case 's':
        char *s = va_arg(ap, char *);
        //strcpy(tmp, va_arg(ap, char *));
        int j = 0;
        while(*s) {
          tmp[j++] = *(s++);
        }
        j = 0;
        break;
      default:
        assert(0);
        break;
    }
    for(int i = 0; i < strlen(tmp); i++) {
      *(str++) = tmp[i];
    }
    for(int i = 0; i < 100; i++) {
      tmp[i] = '\0';
    }
  }
  *str = '\0';
  //panic("Not implemented");
  return str - out;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int len = vsprintf(out, fmt, ap);
  va_end(ap);
  return len;
  //panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  
  panic("Not implemented");
}

#endif
