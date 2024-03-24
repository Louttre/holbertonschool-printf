#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct specfunc
{
	char *flag;
	void (*func)(va_list);
} SF;
int _printf(const char *format, ...);
void _string(va_list args);

#endif
