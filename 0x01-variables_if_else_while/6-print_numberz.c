#include <stdio.h>
/**
 * main - prints all numbers in base 10
 * Return: 0 on success
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
