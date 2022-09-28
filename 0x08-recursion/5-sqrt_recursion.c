#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/** 
 * find_sqrt - finds the square root of a number
 * @num: number whose square root is to be found
 * @root: the root to be tested
 *
 * Return: th square root if the number has a natural square root and -1 if not
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
