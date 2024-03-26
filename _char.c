#include "main.h"
/**
 * _char - print a char
 * @args: list of arguments
 * @count: number of character
 * Return: count + 1
 */
int _char(va_list args, int count)
{
	char c = va_arg(args, char);
	
	write(1, &c, 1);
	return (count + 1);
}
