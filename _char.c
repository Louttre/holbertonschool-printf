#include "main.h"

int _char(va_list args, int count)
{
	char c = va_arg(args, char);
	
	write(1, &c, 1);
	return (count + 1);
}
