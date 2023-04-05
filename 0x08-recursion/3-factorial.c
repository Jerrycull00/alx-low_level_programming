#include "main.h"

/**
 * factorial - Entry point function that estimates the factorial of a number
 * @n: value
 *
 * Return: factorial of n (success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
