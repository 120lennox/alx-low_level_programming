#include <stdio.h>
#include "main.h"
/**
 * print_num - modified putchar function
 * @n: int n
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
 * sum_natural_numbers - calculates sum of naturals numbers
 * Return: sum
*/
int sum_natural_numbers()
{
	int limit;
	limit = 1024;
	int i = 1, sum = 0;

	for (; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	return (sum);
}

/**
 * main - calls func
 * Return: 0 on success
*/
int main(void)
{
	int sum;
	sum = sum_natural_numbers();
	print_num(sum);
	return (0);
}
