#include "main.h"

/**
 *_memcpy - a var function that copies memory area
 *@dest: memory where is stored here
 *@src: memory where it is copied
 *@n: no of bytes
 *
 *Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
