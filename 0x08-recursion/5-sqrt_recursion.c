#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int n
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: int parameter
 * @i: int parameter
 * Return: sqrt
 */
int _sqrt_recursion(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
