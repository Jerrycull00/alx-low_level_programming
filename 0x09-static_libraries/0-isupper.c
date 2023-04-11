#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
