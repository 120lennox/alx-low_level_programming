#include "main.h"
/**
 *print_number - prints integer
 * @n: integer to be printed
 */
void print_number(int n)
{
int digit, is_negative = 0;
if (n == 0)
{
_putchar('0');
return;
}
if (n < 0)
{
is_negative = 1;
n = -n;
}
while (n > 0)
{
digit = n % 10;
_putchar(digit + '0');
n /= 10;
}
/* Print the minus sign for negative numbers */
if (is_negative)
{
_putchar('-');
}
}
