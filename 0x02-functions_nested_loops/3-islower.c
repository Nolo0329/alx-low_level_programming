#include "holberton"

/**
 * _islower - check for a lowercase character
 * @c: letter being tested 
 * Returned: Always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else 
		return (0);
}
