#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_s - prints strings
 * @s: a character string
 *
 * Return: the number of characters printed
 */
int print_s(va_list s)
{
	int i, str_len = 0;

	for (i = 0; s[i] != '\0'; i++)
		str_len++;
	write(1, s, str_len);
	return (str_len);
}

/**
 * print_c - prints character
 * @c: char
 *
 * Return: Always 1
 */
int print_c(va_list c)
{
	_putchar(c);
	return (1);
}
	
/**
 * print_d - prints intergers
 * @n: interger
 *
 * Return: the number of characters printed
 */
int print_d(va_list n)
{
	int d = 1, r = 0;

	if (n < 0)
	{
		_putchar('-');
		r++;
	}
	while (1)
	{
		if (n / d * 10 >= 10)
			d *= 10;
		else
			break;
	}
	while (1)
	{
		if (d == 1)
		{
			if (n >= 10)
			{
				_putchar(((n / 10) % 10) + '0');
				r++;
			}
			_putchar(n % 10 + '0');
			r++;
			break;
		}
		else
		{
			_putchar((n / (d * 10)) % 10 + '0');
			d /= 10;
			r++;
		}
	}
	return (r);
}
