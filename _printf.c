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
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != "%")
		{
			_putchar(format[i]);
			result += 1;
		}
		else
		{
			if (format[i + 1] == "c" || format[i + 1] == "d"
					|| format[i + 1] == "i" ||
				       	format[i + 1] == "s")
			{
				result += get_func(format[i + 1])(va_arg(vl));
			}
			else
			{
				else if (format[i + 1] == '\0')
				{
					_putchar(format[i]);
					result++;
				}
				else if (format[i + 1] == "%")
				{
					_putchar(format[i + 1]);
					result++;
				}
				else
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					result += 2;
				}
			}
			i++;
		}
	}
	return (result);
}
