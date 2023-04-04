#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * conv - a number base converter
 * @num: takes the number to convert
 * @base: takes the base to wich the number has to be converted
 *
 * Return: pointer to buffer
 */
char *conv(unsigned int num, unsigned int base)
{
	char *repr = "0123456789abcdef";
	char *ptr;
	char buffer[64];
	int rest;

	ptr = &buffer[64];
	*ptr = '\0';

	while (num != 0)
	{
		rest = num % base;
		*ptr-- = repr[rest];
		num = num / base;
	}

	return (ptr);
}
