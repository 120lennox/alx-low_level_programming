#include <stdio.h>
/**
 * main - prints all possible combinations of 2 digit numbers
 * Return: 0 on success
 */
int main(void)
{
int first_num;
for (first_num = 0; first_num < 10; first_num++)
{
int second_num;
for (second_num = first_num + 1; second_num < 10; second_num++)
{
if (first_num != second_num)
{
putchar(first_num + '0');
putchar(second_num + '0');
if (first_num != 8 || second_num != 9)
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
