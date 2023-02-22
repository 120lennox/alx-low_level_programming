#include "main.h"
/**
 *print_to_98 - prints all natural numbers
 *@n: has natural numbers
 */
void print_to_98(int n)
{
n = 0;
while (n <= 97)
{
_putchar(n);
_putchar(',');
_putchar(' ');
n++;
}
_putchar(98);
_putchar('\n');
}
