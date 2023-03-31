#include "../main.h"

/**
 * x_to_upper - prints in upper hexadecimal
 * @vl: va_list
 *
 * Return: The number of character printed
 */
int x_to_upper(va_list vl)
{
	unsigned int x = va_arg(vl, unsigned int);
	int i, res = 0;
	char *x_char = baseconvert(x, 16);

	for (i = 0; x_char[i] != '\0'; i++)
	{
		if (x_char[i] >= 97 && x_char[i] <= 122)
			x_char[i] -= 32;
		_putchar(x_char[i]);
		res++;
	}
	return (res);
}
