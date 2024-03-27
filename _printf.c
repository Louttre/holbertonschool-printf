#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
/**
 * write_increment - put a char to stdout and increment count
 * @format: character to print
 * @count: count
 * Return: 0 if success
 */
int write_increment(const char *format, int *count)
{
	write(1, format, 1);
	(*count)++;
	return (0);
}
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
	if (format == NULL || (*format == '%' && !*(format + 1)))
		return (-1);
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
					if (j != 0)
						count = j;
					break;
				}
				i++;
			}
			if (array[i].flag)
				format += strlen(array[i].flag) + 1;
			else if (*(format + 1) == '%')
			{
				write_increment(format, &count);
				format += 2;
			}
			else
			{
				write_increment(format, &count);	
				format++;
			}
			if (*format == '\0')
				break;
		}
		else
		{
			write_increment(format, &count);
			format++;
		}
	}
	va_end(args);
	return (count);
}
