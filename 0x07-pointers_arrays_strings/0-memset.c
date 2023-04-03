#include "main.h"

/**
 * _memset - fill the block of memory with a specific value
 * @s: starting address of the  memory to be filled
 * @b: the desired value
 * @n: no of bytes to change
 *
 * Return: change array with new value for n bytes (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
