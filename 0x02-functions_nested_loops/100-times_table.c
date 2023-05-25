#include <stdio.h>
#include "main.h"
/**
 * print_num - modified putchar function
 * @num: int num
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
 * print_times_table - prints times table n times
 * @n: number of times
*/
void print_times_table(int n)
{
	int limit;

	limit = n;
	int i, j;

	for (i = 0; i <= limit; i++)
	{
		for (j = 0; j <= limit; j++)
		{
			int product;

			product = i * j;
			print_num(product);
			_putchar(',');
			_putchar(' ');
			if (i == limit || j == limit)
			{
				print_num(product);
			}
		}
		_putchar('\n');
	}
}
