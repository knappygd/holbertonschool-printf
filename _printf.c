#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format
 * @format: a character string, composed of zero or more
 * directives, to format the output.
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, result = 0;
	va_list vl;

	va_start(vl, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			result += 1;
		}
		else
		{
			if (reco_array(format[i + 1]) == 1)
			{
				result += get_func(format[i + 1])(vl);
			}
			else
			{
				if (format[i + 1] == '%')
				{
					_putchar(format[i + 1]);
				}
				else if (format[i + 1] == '\0')
				{
					return (-1);
				}
				else
				{
					_putchar(format[i]);
					i--;
				}
				result++;
			}
			i++;
		}
	}
	return (result);
}
