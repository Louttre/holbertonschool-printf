#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 * _binary - convert int to binary
 * @args: list of arguments
 * @count: number of character
 * Return: count + number of digit of the integer
 */
int _binary(va_list args, int count)
{
	int num = va_arg(args, int);
	char *s;
	
	if (num == 0)
	{
		write(1, "0", 1);
		return (count + 1);
	}
	s = convert_binary(num);
	write(1, s, strlen(s));

	return (count += strlen(s));
}
