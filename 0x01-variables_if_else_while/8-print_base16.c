/**
 * File: 8-print_base16.c
 *
 */

#include <stdio.h>

/**
 * main - Prints a hexadecimal string
 * Description: using the main function
 * this program prints "Programming is positive, zero or negative
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
