/*
 * File: 5-print_numbers.c
 *
 */

#include <stdio.h>

/**
 * main - Prints the number from 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
