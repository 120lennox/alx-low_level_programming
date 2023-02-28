#include <string.h>
#include "main.h"
/**
 *rev_string - prints a string in reverse
 * @s: has value of string
 */
void rev_string(char *s)
{
size_t len = strlen(s);
size_t i;
for (i = 0; i < len / 2; i++)
{
char temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
