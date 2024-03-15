#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void itoa(int n, char *str, int radix) {
  int i = 0;
  int sign = n;
  if(sign < 0) n = -n;
  do {
    int digit = n % radix;
    str[i++] = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
  } while((n /= radix) != 0);
  if(sign < 0) str[i++] = '-';
  str[i] = '\0';
  char reverse[100] = {'\0'};
  for (int j = 0; j < i; j++) {
    reverse[j] = str[i - j - 1];
  }
  for (int j = 0; j < i; j++) {
    str[j] = reverse[j];
  }
}

int printf(const char *fmt, ...) {
  
  panic("Not implemented");
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
