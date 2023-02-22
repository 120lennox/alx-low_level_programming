#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet 10 times
 *Return: 0 on success
 */
void print_alphabet_x10(void)
{
int times = 0;
while (times <= 10)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
times++;
}
}
