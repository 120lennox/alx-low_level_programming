#include <stdio.h>
#include <unistd.h>
/**
 *main - prints that exact string
 *Return: 1 on success
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 43);
return (1);
}
