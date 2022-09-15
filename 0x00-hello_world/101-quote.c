#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a specified string literal.
 *
 * Description: Prints a string literal then a new line to standard error.
 * Return: Will return a 1 by default.
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
