#include <stdio.h>
/**
 * main - prints alphabet but not q and e
 * Return: 0 on success
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter += 1;
	}
	putchar('\n');
	return (0);
}
