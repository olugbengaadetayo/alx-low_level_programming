#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */

int main(argc _attribute _((unused)), *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
