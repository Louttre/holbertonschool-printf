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
	unsigned int i = 0;
	char *s;
	int lennum = num;

	while (lennum > 0)
	{
		lennum /= 2;
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	i = 0;

	while (num > 0)
	{
		s[i] = num % 2 + '0';
		num /= 2;
		i++;
	}
	s[i] = '\0';
	reverse(s);
	for (; *s; i++)
	{
		write(1, s, 1);
		s++;
	}
	return (count += strlen(s));
}
