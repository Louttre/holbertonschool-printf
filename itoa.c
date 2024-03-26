#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 * _itoa - convert an integer to a string
 * @i: interger to convert
 * Return: string
 */
char *itoa(int i)
{
	char *s;
	int count;
	int leni = 0;
	
	if (i < 0)
		i = -i;
	count = i;
	while (count > 0)
	{
		count /= 10;
		leni++;
	}
	s = malloc(sizeof(char) * (leni + 1));
	if (s == NULL)
		return (NULL);
	s[leni] = '\0';
	while (leni > 0)
	{
		s[leni - 1] = (i % 10) + '0';
		i /= 10;
		leni--;	
	}
	return (s);
}
