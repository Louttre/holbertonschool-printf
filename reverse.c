#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 * reverse - reverse a string
 * @s: string to reverse
 * Return: reversed string
 */
char *reverse(char *s)
{
	char temp;
	unsigned int i = 0;
	unsigned int j = strlen(s) - 1;

	for (; i < j; i++, j--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
	return (s);
}
