#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: character to insert
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (0);

	p = malloc((size) * sizeof(char));

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
