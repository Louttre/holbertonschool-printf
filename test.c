#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int main(void)
{
	_printf("abcd%sefghi\n", "\nHello\n");
	return (0);
}
