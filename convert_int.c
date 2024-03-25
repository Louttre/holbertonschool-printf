#include <stdio.h>

int _pow(int i, int j)
{
	if (j == 0)
		return (1);
	else
		return (i * (_pow(i, j - 1)));
}
int convert_int(int i)
{
        int j = 0;
        int tempj = 0, tempi = 0;
        int witness = 0;

        if (i < 0)
        {
                i = -i;
                witness = 1;
        }
        while (i > 0)
        {
                j = j * 10 + i % 10;
                i /= 10;
                tempi++;
        }
        i = 0;
        while (j > 0)
        {
                i = i * 10 + j % 10;
                j /= 10;
                tempj++;
        }
        if (tempj < tempi)
                i = i * _pow(10, (tempi-tempj));
        if (witness)
                i = -i;
        return (i);
}
