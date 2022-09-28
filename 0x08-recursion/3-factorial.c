#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be used
 *
 * Return: the factorial of the number if n > 0 and -1 to i ndicate an error
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
}
