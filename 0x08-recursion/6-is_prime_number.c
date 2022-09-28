#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks if a number is divisible
 * @num: the number to be checked
 * @div: the divisor
 *
 * Return: 1 if number is not divible, 0 otherwise
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
}
