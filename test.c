#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int main(void)
{
	int c = _printf("abcd%fefghi\n");
	printf("%d\n", c);
	return (0);
}
