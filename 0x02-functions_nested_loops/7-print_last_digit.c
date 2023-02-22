#include "main.h"
/**
 *print_last_digit - prints last digit
 *@digit: the last digit to be returned
 *Return: 0 om success
 */
int print_last_digit(int digit)
{
int num;
digit = num % 10;
if (digit < 0)
{
return (-digit);
}
else
{
return (digit);
}
}
