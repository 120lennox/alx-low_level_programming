#include <stdio.h>
/**
 *main - prints all possible 3 digit comb
 *Return: 0 on success
 */
int main(void)
{
int num1, num2, num3;
int count = 0;
for (num1 = 0; num1 < 8; num1++)
{
for (num2 = num1 + 1; num2 < 9; num2++)
{
for (num3 = num2 + 1; num3 < 10; num3++)
{
putchar(num1 + '0');
putchar(num2 + '0');
putchar(num3 + '0');
count++;
if (count < 120)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
