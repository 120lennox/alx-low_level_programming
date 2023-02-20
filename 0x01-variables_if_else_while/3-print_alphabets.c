#include <stdio.h>
/**
 *main - prints all lower case and uppercase alphabet letters
 *Return: 0 on success
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter = letter + 1;
}
/*upper case letters*/
letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter = letter + 1;
}
putchar('\n');
return (0);
}
