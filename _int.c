#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int _int(va_list args, int count)
{
	char *s;
	int j = va_arg(args, int);
	int i = convert_int(j);
	
	s = itoa(i);
	if (i < 0)
	{
		write(1, "-", 1);
		count++;
	}
	write(1, s, strlen(s));
	count += strlen(s);
	free(s);
	return (count);
}
