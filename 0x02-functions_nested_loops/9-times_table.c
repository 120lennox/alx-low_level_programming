#include <stdio.h>
#include "main.h"
/**
 * print_num - modified putchar function that rpints integers
 * @num: int n
*/
void print_num(int num)
{
	if (num < 10)
	{
		_putchar(num + '0');
	}
	else
	{
		print_num(num / 10);
		_putchar((num % 10) + '0');
	}
}
/**
 * times_table - prints a times table
*/
void times_table(void)
{
	int i;

	int j;

	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			print_num(result);
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
