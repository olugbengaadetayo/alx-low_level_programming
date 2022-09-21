#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: array
 * @n: nu,ber of elements
 */

void reverse_array(int *a, int n)
{
int tmp, index;
for (index = n - 1; index > n / 2;mindex--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
