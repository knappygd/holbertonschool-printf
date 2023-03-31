#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse - prints a string in reverse
 * @vl: va_list
 *
 * Return: the number of characters printed
 */
int reverse(va_list vl)
{
	int len = 0, res = 0;
	char *to_rev = va_arg(vl, char *);

	while (to_rev[len] != '\0')
		len++;
	while (len >= 0)
	{
		_putchar(to_rev[len]);
		res++;
		len--;
	}
	return (res);
}
