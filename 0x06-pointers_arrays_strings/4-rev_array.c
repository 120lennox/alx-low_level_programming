#include "main.h"
/**
 *reverse_array - takes an array and reverses it
 *
 *@a: input array
 *@n: total elements
 *
 * Return: (Nothing)
 */
void reverse_array(int *a, int n)
{
int temp;
int i;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
