#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: return the length
 */
int _strlen(char *s)
{
	int count;
	int inc = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		inc++;
	}
	
	return (inc);
}
