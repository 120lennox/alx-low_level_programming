#include <stdio.h>
/**
 *main - prints all letters from a to z in lower case
 *Return: 0 on success
 */
int main(void)
{
char letter = 'a';
while (letter < 'z')
{
putchar(letter);
putchar('\n');
letter = letter + 1;
}
return (0);
}
