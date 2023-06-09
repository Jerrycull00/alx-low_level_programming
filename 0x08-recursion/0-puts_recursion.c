#include "main.h"

/**
 * _puts_recursion - put recursive functions
 * @s: argument
 * Return: 0 always
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	if (!*s)
		_putchar('\n');
}
