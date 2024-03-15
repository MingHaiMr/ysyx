#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  if (s == NULL)
  {
    return 0;
  }
  else
  {
    int i = 0;
    while(s[i] != '\0')
    {
      i ++;
    }
    return i;
  }
  //panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  char *s = dst;
  if(dst != NULL && src != NULL)
  {
    while(*src != '\0')
    {
      *dst = *src;
      dst ++;
      src ++;
    }
    return s;
  //panic("Not implemented");
  }
  else
  {
    return NULL;
  }
}

char *strncpy(char *dst, const char *src, size_t n) {
  int i;
  char *s = dst;
  if(dst != NULL && src != NULL)
  {
    for(i = 0; i < n; i ++)
    {
      if(src != NULL)
      {
        *dst = *src;
      }
      else
      {
        *dst = '\0';
      }
    }
    return s;
  }
  else
  {
    return NULL;
  }
  //panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  char *s = dst;
  while(*dst != '\0')
  {
    dst ++;
  }
  while(*src != '\0')
  {
    *dst = *src;
    dst ++;
    src ++;
  }
  *dst = '\0';
  return s;
  //panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  if(s1 != NULL && s2 != NULL)
  {
    while(*s1 != '\0' && *s2 != '\0' && *s1 ==*s2)
    {
      s1 ++;
      s2 ++;
    }
    if(*s1 ==*s2)
    {
      return 0;
    }
    else
    {
      if(*s1 > *s2)
      {
        return 1;
      }
      else
      {
        return -1;
      }
    }
  }
  else
  {
    return 0;
  }
  //panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  if(s1 != NULL && s2 != NULL)
  {
    while(n > 0)
    {
      if(*s1 == *s2)
      {
        n --;
      }
      else
      {
        if(*s1 > *s2)
        {
          return 1;
        }
        else if(*s1 < *s2)
        {
          return -1;
        }
      }
    }
    if(*s1 > *s2) return 1;
    else return -1;
  }
  else
  {
    return 0;
  }
  //panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  char *start = s;
  while(n > 0)
  {
    *start = (unsigned int) c;
    start ++;
    n --;
  }
  return s;
  //panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {

  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const char *p1 = s1;
  const char *p2 = s2;
  if(p1 != NULL && p2 != NULL)
  {
    while(n > 0 && *p1 != '\0' && *p2 != '\0')
    {
      if(*p1 == *p2)
      {
        n --;
      }
      else if(*p1 < *p2)
      {
        return -1;
      }
      else return 1;
    }
    if(n == 0)
    {
      return 0;
    }
    else
    {
      if(*p1 < *p2)
      {
        return -1;
      }
      else return 1;
    }
  }
  else return 0;
  //anic("Not implemented");
}

#endif
