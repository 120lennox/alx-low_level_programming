#include <unistd.h>
/**
 * main - prints text
 * Return: 0 on success
 */
int main(void)
{
	const char *message = "and that piece of art is useful";
	char *message1 = "- Dora Korpar, 2015-10-19";
	char *endline = "\n";

	write(2, message, 25);
	write(2, message1, 25);
	write(2, endline, 2);
	return (1);
}
