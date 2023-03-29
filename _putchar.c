#include <unistd.h>

/**
 * _putchar - simple putchar function
 * @c: char to print
 *
 * Return: write function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
