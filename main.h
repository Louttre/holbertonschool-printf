#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct specfunc
{
        char *flag;
        int (*func)(va_list, int);
} SF;
int _printf(const char *format, ...);
int _string(va_list, int);
int _int(va_list, int);
char *itoa(int i);
int _char(va_list args, int count);
#endif
