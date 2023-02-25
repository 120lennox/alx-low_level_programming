#include "main.h"
/**
 *print_numbers - prints all numbers from 0 -9
  */
void print_numbers(void)
{
int num = 48;
while (num >= 48 && num <= 57)
{
_putchar(num + '0');
num++;
}
_putchar('\n');
}
