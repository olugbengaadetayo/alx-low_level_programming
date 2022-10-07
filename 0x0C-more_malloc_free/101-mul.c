#include "main.h"
#include <stdlib.h>

/**
 * main - function that multiplies two numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{

unsigned long mul;
int i, j;
	if (argc != 1)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{ printf("Error\n");
			exit(98); }
		}

	}
	mul = atoi(argv[i]) * atoi(argv[i]);
	printf("%lu\n", mul);
return (0);
}
