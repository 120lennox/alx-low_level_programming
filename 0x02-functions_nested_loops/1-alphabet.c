#include <stdio.h>
#include "main.h"
/**
 * main - prints alphabet
 * Return: 0 on success
*/
void print_alphabet(void)
{
	char letter;
	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter += 1;
	}
	putchar('\n');
}
