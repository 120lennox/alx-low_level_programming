#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - last digit of a value
 * @a: valuu parameter
 * Return: last digit
*/
int print_last_digit(int a)
{
	int last_digit;
	last_digit = a % 10;
	if (last_digit < 0)
	{
		return (-last_digit);
	}
	else 
	{
		return (last_digit);
	}
}
