#include "main.h"
/**
 *_sqrt_recursion - recursive sqaure root
 * @n: number
 *Return: num
 */
int _sqrt_recursion(int n)
{
int root;
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
root = _sqrt_recursion(n / 2);
if (root == -1)
{
return (-1);
}
if (root * root <= n && (root + 1) * (root + 1) > n)
{
return (root);
}
else
{
return (_sqrt_recursion((n / root + root) / 2));
}
}
