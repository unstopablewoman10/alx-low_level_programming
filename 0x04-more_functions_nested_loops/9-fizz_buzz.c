#include <stdio.h>

/**
 * main - print buzz each number of 3 and 5.
 * Return: Always 0.
 */

int main(void)
{
	int n = 1, m = 100;

	while (n <= 100)
	{
		if ((n % 3 != 0) && (n % 5 != 0))
		{
			printf("%d", n);
		}
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		if (n % 5 == 0)
		{
			printf("Buzz");
		}
		putchar(n == m ? '\n' : ' ');
		n++;
	}
		return (0);
}
