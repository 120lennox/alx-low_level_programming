#include "main.h"
/**
 * is_prime_number_helper - helps tp get prime numbers
 * @n: num1
 * @i: num 2
 * Return: prime
 */
int is_prime_number_helper(int n, int i)
{
if (n <= 1)
{
return (0);
}
else if (i > n / 2)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
else
{
return (is_prime_number_helper(n, i + 1));
}
}
/**
 *is_prime_number - gets prime num
 * @n: num
 * Return: recursive func
 */
int is_prime_number(int n)
{
return (is_prime_number_helper(n, 2));
}
