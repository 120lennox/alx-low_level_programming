#include "main.h"
/**
 * _puts_recursion - prints a reverse string
 * @s: pointer to a string
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
