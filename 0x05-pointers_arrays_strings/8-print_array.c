#include <stdio.h>
#include "main.h"
/**
 *print_array - prints an array
 * @a: elements of an array
 * @n: size of array to be printed
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
