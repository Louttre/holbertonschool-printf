#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
/**
 * _printf - print a string to stdout
 * @format: stringer that contain or not some specifiers
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int i = 0;
	va_list args;
	int j;
	SF array[] = {
		{"c", _char},
		{"s", _string},
		{"d", _int},
		{"i", _int},
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
			else if (*format == '\0')
				break;
		}
		(void)(*format == '%' && *(format + 1) == '%' && format++);
		write(1, format, 1);
		count++;
		format++;
	}
	va_end(args);
	return (count);
}
