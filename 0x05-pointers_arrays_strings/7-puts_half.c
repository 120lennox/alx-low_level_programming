#include <string.h>
#include "main.h"
/**
 *puts_half - prints half of string
 *@str: address that contain string value
 */
void puts_half(char *str)
{
int string_len = strlen(str);
int begin = string_len % 2 == 0 ? string_len / 2 : (string_len - 1) / 2 + 1;
int i;
for (i = begin; i < string_len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
