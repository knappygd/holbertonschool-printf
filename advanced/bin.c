#include "../main.h"

/**
 * bin - print number in binary base (2)
 * @vl: va_list
 *
 * Return: number of characters printed
 */
int bin(va_list vl)
{
	int i, res = 0;
	unsigned int n_bin = va_arg(vl, unsigned int);
	char *n = baseconv(n_bin, 2);
	
	for (i = 0; n[i] != '\0'; i++)
	{
		_putchar(n[i]);
		res++;
	}
	return (res);
}
