#include "main.h"
/**
 *print_line - prints a line on console
 *@n: has number of times to print line
 */
void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
