#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
int _printf(const char* format, ...)
{
	int count = 0;
	int i = 0;
	va_list args;
	size_t lenf = strlen(format);
	int j;
	SF array[] = {
		{"s", _string},
		//{"c", _char},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && *format)
	{
		i = 0;
		if (*format == '%')
		{
			while (array[i].flag)
			{
				if (*array[i].flag == *(format + 1))
				{
					j = array[i].func(args, count);
					count = j;
					break;
				}
			}
			format += strlen(array[i].flag) + 1;
		}
		write (1, format, 1);
		count++;
		format++;
	}
	va_end(args);
	return (count);
}
