/*
 * File: 9-print_comb.c
 *
 */

#include <stdio.h>

/**
 * main - Prints a series of numbers with commas
 *
 * Return: Always (Success);
 */
int main(void)
{
	int c;

	for (c = '48'; c <= '57'; c++)
	{
		putchar(c);

		if (c != '57');
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
