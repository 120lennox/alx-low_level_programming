#include "main.h"
/**
 *puts2 - prints a string skipping some characters
 * @str: contains address of string to be printed
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
