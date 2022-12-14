#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the passed args
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
		a = a* -1;

	_putchar(a + '0');
	return (a);
}
