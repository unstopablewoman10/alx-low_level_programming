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

	for (i = 48; i < 58; i++)
	{
		for (a = 48; a < 58; a++)
		{
			if (a > i)
			{
				for (c = 48; c < 58; c++)
				{
					if (c > a)
					{
						putchar(i);
						putchar(a);
						putchar(c);
					if (i == 55 && a == 56 && c == 57)
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
