#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct specfunc - struc to couple a specifier to a function
 * @flag: specifier
 * @func: pointer to the function
 * Description: interpret the specifier and the related function
 */
typedef struct specfunc
{
	char *flag;
	int (*func)(va_list, int);
} SF;
int _printf(const char *format, ...);
int _string(va_list, int);
int _int(va_list, int);
char *itoa(int i);
int _char(va_list, int);
#endif
