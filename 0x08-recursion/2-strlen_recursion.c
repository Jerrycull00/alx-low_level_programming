#include "main.h"

/**
 * _strlen_recursion - Entry point function
 * @s: string to be measured.
 *
 * Return: length of s string.
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
