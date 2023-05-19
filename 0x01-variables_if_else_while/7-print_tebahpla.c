#include <stdio.h>
/**
 * main- prints letters in reverse
 * Return: 0 on success
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter -= 1;
	}
	putchar('\n');
	return (0);
}
