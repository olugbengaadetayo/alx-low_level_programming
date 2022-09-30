#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - this is a program that prints its name
 * argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	(void) argc;
	printf("%d\n", result);
	return (0);
}
