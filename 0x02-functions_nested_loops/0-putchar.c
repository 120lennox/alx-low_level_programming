#include <stdio.h>
#include "main.h"

/**
 * main - prints putchar
 * Return: 0 on success
*/
int main(void)
{
	int i;
	
	char *string;

	string = "_putchar";

	i = 0;

	while (string[i] != '\0')
	{
		putchar(string[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
