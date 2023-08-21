#include <stdio.h>

int add(int a, int b) 
{
	return a + b;
}

int sub(int a, int b) 
{
	return a - b;
}

int mul(int a, int b) 
{
	return a * b;
}

int div(int a, int b) 
{
	if (b != 0)
	{
		return a / b;
	}
	else
	{
		fprintf(stderr, "Division by zero!\n");
		return 0;  // Return some default value in case of division by zero
	}
}

int mod(int a, int b)
{
		if (b != 0)
		{
		return a % b;
		}
	else
		{
			fprintf(stderr, "Modulo by zero!\n");
			return 0;  // Return some default value in case of modulo by zero
		}
}
