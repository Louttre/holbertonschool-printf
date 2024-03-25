#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

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
	s[leni] = '\0';
	while (leni > 0)
	{
		s[leni - 1] = (i % 10) + '0';
		i /= 10;
		leni--;	
	}
	return (s);
}
