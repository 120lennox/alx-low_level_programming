#include <stdio.h>
/**
 *main - prints all alphabet letters in reverse order
 *Return: 0 on success
 */
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter = letter - 1;
}
putchar('\n');
return (0);
}
