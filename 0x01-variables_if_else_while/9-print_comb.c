#include <stdio.h>
/**
 *main - prints all numbers < 10
 *Return: 0 on success
 */
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
if (num < 9)
{
putchar(',');
putchar(' ');
}
else
putchar(' ');
num++;
}
return (0);
}
