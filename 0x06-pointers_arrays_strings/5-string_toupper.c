#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @n: pointer value
 * Return: char
 */

char *string_toupper(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
		       str[k] -= 32;
	k++;
	}
	return (str);
}
