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
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		str_len++;
	write(1, str, str_len);
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
	char ch = va_arg(c, int);

	_putchar(ch);
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
	int d = 1, r = 0, num = va_arg(n, int);
	unsigned int num_abs = 0;

	if (num < 0)
	{
		_putchar('-');
		r++;
	}
	num_abs = (unsigned int)(_abs(num));
	while (1)
	{
		if (num_abs / (d * 10) >= 10)
			d *= 10;
		else
			break;
	}
	while (1)
	{
		if (d == 1)
		{
			if (num_abs >= 10)
			{
				_putchar(((num_abs / 10) % 10) + '0');
				r++;
			}
			_putchar(num_abs % 10 + '0');
			r++;
			break;
		}
		else
		{
			_putchar(((num_abs / (d * 10)) % 10) + '0');
			d /= 10;
			r++;
		}
	}
	return (r);
}

/**
 * reco_array - search in the array for coincidence
 * @c: a character
 *
 * Return: True or False
 */
int reco_array(char c)
{
	int i;
	char array[] = {'c', 's', 'd', 'i'};

	for (i = 0; array[i] != '\0'; i++)
	{
		if (c == array[i])
			return (1);
	}
	return (0);
}

/**
 * _abs - calculates the abs value of a int
 * @n: a int
 *
 * Return: the abs value
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
