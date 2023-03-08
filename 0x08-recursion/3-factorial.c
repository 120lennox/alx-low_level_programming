#include "main.h"
/**
 * factorial - calculates factorial
 * @n: pointer to number
 * Return: -1 if neg or 1 if pos or factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (factorial(n - 1) * n);
}
