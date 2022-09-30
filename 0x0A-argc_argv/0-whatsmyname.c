#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: argc parameter
 * @unused: unused argc
 * Return: 0 for success
 */

int main(int argc, __attribute___((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
