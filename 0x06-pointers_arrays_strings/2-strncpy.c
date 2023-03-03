#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 *_strncpy - copies a string
 *@dest: string destination
 *@src: string original
 *@n: int held
 *Return: strncpy library on success
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
