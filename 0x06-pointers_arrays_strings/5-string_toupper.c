#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *string_toupper - change string to upper
 * @str: string to be changed
 *Return: str on success
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i])
{
str[i] = toupper(str[i]);
i++;
}
return (str);
}
