#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b > 9 ? (b / 10) + '0' : a + '0');
			if (b >= 10)
			_putchar ((a % 10) + '0');
		}
		_putchar('\n');
	}
}
