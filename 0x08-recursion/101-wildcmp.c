#include "main.h"
#include <string.h>
/**
 *wildcmp - checks if string is identical
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * Return: 1 0 wildcmp
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '\0')
{
return (0);
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1))
{
return (1);
}
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
{
return (1);
}
}
return (0);
}
