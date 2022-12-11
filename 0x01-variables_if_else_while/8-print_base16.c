#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int b;

	for (b = 0; b < 16; b++)
	{
		if (b < 10)
		{
			putchar(b + '0');
		} else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);

}
