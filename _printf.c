#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
int _printf(const char* format, ...)
{
	int count = 0;
	int i = 0;
	va_list args;
	int j;
	SF array[] = {
		{"s", _string},
	//	{"d", _int},
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
				i++;
			}
			if (array[i].flag)	
				format += strlen(array[i].flag) + 1;
		}
		write (1, format, 1);
		count++;
		format++;
	}
	va_end(args);
	return (count);
}
