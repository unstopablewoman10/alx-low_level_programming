#include "main.h"

/**
 * times_table -  prints the 9 times table
 * Return: no success
 */

void times_table(void)
{
	int i = 0, j = 9, c = 0;

	while (c <= 9)
	{
		while (i <= j)
		{
			int p = c * i;

			if (i != 0)
			{
				_putchar(',');
				if (p < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
			if (p < 10)
				_putchar(p + '0');
			else
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
			if (i == j)
				_putchar('\n');
			i++;
		}
		i = 0;
		c++;
	}
}
