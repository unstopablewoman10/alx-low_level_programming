#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int a;
	int c;

	for (i = 29; i < 39; i++)
	{
		for (a = 29; a < 39; a++)
		{
			if (a > i)
			{
				for (c = 29; c < 39; c++)
				{
					if (c > a)
					{
						putchar(i);
						putchar(a);
						putchar(c);
					if (i == 36 && a == 37 && c == 38)
					{
						break;
					}
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	putchar('\n');
	return (0);
	}
