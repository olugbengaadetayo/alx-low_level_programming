#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name
 * @argc: counts arguments
 * @argv: an array of command listed
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i, argv[i]);
	}
	return (0);
}
