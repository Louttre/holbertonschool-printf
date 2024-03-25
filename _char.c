#include "main.h"
#include <stdio.h>
#include <unistd.h>

int _char(va_list args, int count)
{
    char c = va_arg(args, int);
    write(1, &c, 1);
    return count + 1;
}
