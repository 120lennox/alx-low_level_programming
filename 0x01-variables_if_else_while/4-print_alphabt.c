#include <stdio.h>
/**
 *main - prints all letters except e & q
 *Return: 0 on success
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
putchar(letter);
letter = letter + 1;
}
putchar('\n');
return (0);
}
