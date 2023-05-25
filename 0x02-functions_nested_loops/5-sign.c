#include <stdio.h>
#include "main.h"
/**
 * print_sign - returns sign
 * @n: int n
 * Return: 1 0 and neg 1 on success
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
