#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

void _string(va_list args)
{
	char *s = va_arg(args, char *);
	write(1, s, strlen(s));
}
