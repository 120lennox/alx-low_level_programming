#include <stdio.h>
/**
 * main - prints numbers
 * Return: 0 on success
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	putchar('\n');
	return (0);
}
