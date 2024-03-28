#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 * convert_binary - convert int to binary
 * @num: int to convert
 * Return: string that correspond to the binary of num
 */
char *convert_binary(int num)
{
	unsigned int i = 0;
	char *s;
	int lennum;
	int checksign = 0;

	if (num < 0)
	{
		num = -num;
		checksign = 1;
	}
	lennum = num;
	while (lennum > 0)
	{
		lennum /= 2;
		i++;
	}
	if (checksign)
	{
		s = malloc(sizeof(char) * (i + 2));
		i += 1;
	}
	else	
		s = malloc(sizeof(char) * (i + 1));
	s[i] = '\0';
	if (s == NULL)
		return (NULL);
	while (i > 0)
	{
		if (checksign && i == 1)
		{
			s[i - 1] = '1';
			break;
		}
		s[i - 1] = num % 2 + '0';
		num /= 2;
		i--;
	}
	return (s);
}
