#include <stdio.h>
#include "main.h"
/**
 * print_num - modified putchar function to print numbers greater than 5
 * @num: number
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
/** print_to_98 - print natural nums to 98
 * @n: start int
*/
void print_to_98(int n)
{
	int start;
	start = n;

	if (start < 98)
	{
	while (start <= 98)
	{
		print_num(start);
		_putchar(',');
		_putchar(' ');
			if (start == 98)
			{
				print_num(start);
			}
		start++;
	}
	_putchar('\n');
	}
	else if (start == 98)
	{
		print_num(98);
		_putchar('\n');
	}
	else
	{
		while (start >= 98)
		{
			print_num(start);
			_putchar(',');
			_putchar(' ');
				if (start == 98)
				{
					print_num(start);
				}
			start = start -1;
		}
		_putchar('\n');
	}
}
