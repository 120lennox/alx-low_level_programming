#include "main.h"
/**
 *_pow_recursion - recursively calc pow of x
 * @x: num
 * @y: expo
 * Return: -1, 1 amd x
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
