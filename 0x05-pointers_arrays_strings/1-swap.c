#include <stdio.h>
#include "main.h"
/**
 *swap_int - swaps values of a and b using pointers
 * @a: has value of a
 * @b: has int value of b
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
