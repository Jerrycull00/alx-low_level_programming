#include "main.h"

/**
 * _islower - checks for lowercase
 * @c:  check
 * Return: 1 if c is lowercase, 0 otherwise success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
