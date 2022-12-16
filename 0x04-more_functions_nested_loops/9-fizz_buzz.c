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
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		putchar(n == m ? '\n' : ' ');
	}
		return (0);
}
