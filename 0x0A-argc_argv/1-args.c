#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: number of arguments
 */

int main(int argc, char  *argv[] __attribute__((__unused__)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
