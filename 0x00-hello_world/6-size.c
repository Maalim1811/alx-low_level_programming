#include <stdio.h>

/**
 * main - prints the size in bytes of a type.
 *
 * Description: Use sizeof(type) to find the size of a type.
 * Size will be in bytes.
 * Return: return 0 on success else print another number.
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
