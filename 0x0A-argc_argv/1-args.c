#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: counts of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
