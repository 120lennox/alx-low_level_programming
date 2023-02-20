#include <stdio.h>
/**
 *main - prints all integers less than 10
 *Return: 0 on success
 */
int main(void)
{
int num = 0;
while (num < 10)
{
printf("%d", num);
num = num + 1;
}
putchar('\n');
return (0);
}
