#include "../main.h"

/**
 * hex - print number in hexadecimal base (16)
 * @vl: va_list
 *
 * Return: number of characters printed
 */
int hex(va_list vl)
{
	int i, res = 0;
	unsigned int n_hex = va_arg(vl, unsigned int);
	char *hex = baseconv(n_hex, 16);
	
	for (i = 0; hex[i] != '\0'; i++)
	{
		_putchar(n_hex[i]);
		res++;
	}
	return (res);
}
