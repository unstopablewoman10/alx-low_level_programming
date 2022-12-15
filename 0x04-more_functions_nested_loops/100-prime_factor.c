#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints the largest prime factor.
 * Return: Always 0.
 */
int main(void)
{
	long int n, fp;

	n = 612852475143;
	while (fp < (n / 2))
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}
		for (fp = 3; fp < (n / 2); fp += 2)
		{
			if ((n % fp) == 0)
				n /= fp;
		}
	}
	printf("%ld\n", n);
	return (0);
}
