#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
/**
 * _string - print a string
 * @args: string to print
 * @count: length of string
 * Return: count + length of the printed string
 */
int _string(va_list args, int count)
{
	char *s = va_arg(args, char *);

	write(1, s, strlen(s));
	count += strlen(s);
	return (count);
}
