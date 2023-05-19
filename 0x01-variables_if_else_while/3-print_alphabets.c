#include <stdio.h>
/**
 * main - prints upper and lower alphabet
 *Return: 0 on success
*/
int main(void)
{
	char letter = 'a';
	char letter_upper = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter += 1;
	}

	while (letter_upper <= 'Z')
	{
		putchar(letter_upper);
		letter_upper += 1;
	}
	putchar('\n');
	return (0);
}
