#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compaired
 * @s2: string to be compaired
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
