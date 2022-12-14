#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the passed args
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (a < 0)
		a *= -1;
	a = n % 10;
	_putchar(a + '0');
	return (0);
}
