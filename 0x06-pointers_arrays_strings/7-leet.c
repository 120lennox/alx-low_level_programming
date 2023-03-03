#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *leet - words
 *@str: string
 *Return: result on success
 */
char *leet(char *str)
{
char *result = malloc(strlen(str) + 1);
int i, j;
char c;
for (i = 0, j = 0; str[i] != '\0'; i++)
{
c = str[i];
if (c == 'a' || c == 'A')
{
result[j++] = '4';
}
else if (c == 'e' || c == 'E')
{
result[j++] = '3';
}
else if (c == 'o' || c == 'O')
{
result[j++] = '0';
}
else if (c == 't' || c == 'T')
{
result[j++] = '7';
}
else if (c == 'l' || c == 'L')
{
result[j++] = '1';
}
else
{
result[j++] = c;
}
}
result[j] = '\0';
return (result);
}
