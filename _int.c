#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 * _int - print an integer
 * @args: list of arguments
 * @count: number of character
 * Return: count + number of digit of the integer
 */
int _int(va_list args, int count)
{
	char *s;
	int j = va_arg(args, int);

	s = itoa(j);
	if (s == 0)
	{
		write(1, "0", 1);
		return (count++);
	}
	if (j < 0)
	{
		write(1, "-", 1);
		count++;
	}
	write(1, s, strlen(s));
	count += strlen(s);
	free(s);
	return (count);
}
