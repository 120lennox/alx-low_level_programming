#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
int i;
int len = strlen(str);
if (len > 0 && islower(str[0]))
{
str[0] = toupper(str[0]);
}
for (i = 1; i < len; i++)
{
if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
str[i - 1] == '\n' || str[i - 1] == ',' ||
str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' ||
str[i - 1] == '"' || str[i - 1] == '(' ||
str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
{
if (islower(str[i]))
{
str[i] = toupper(str[i]);
}
}
}
return (str);
}
