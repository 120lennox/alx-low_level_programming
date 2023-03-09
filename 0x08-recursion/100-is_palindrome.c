#include "main.h"
#include <string.h>
/**
 *is_palindrome_recursive - declares cheking points
 * @s: string pointer
 * @start: index 0
 * @end: index -1
 * Return: 0 1
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] == s[end])
{
return (is_palindrome_recursive(s, start + 1, end - 1));
}
else
{
return (0);
}
}
/**
 *is_palindrome - checks is string is palindrome
 * @s: points to string to b checked
 * Return: is_palindrome func
 */
int is_palindrome(char *s)
{
int len = strlen(s);
return (is_palindrome_recursive(s, 0, len - 1));
}
