#include "main.h"
/**
 *_islower - checks if character is lower case
 *@c: stores character to be checked
 *Return: 0 on success
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
