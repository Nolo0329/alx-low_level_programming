#include "main.h"

/**
 * factorial - eturns the factorial of a given number
 * @n: interger params
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
