#include "../main.h"

/**
 * decimal - prints and converts a unsigned int argument
 * to unsigned decimal
 * @vl: va_list
 *
 * Return: The number of characters printed
 */
int decimal(va_list vl)
{
	int n = va_arg(vl, int), res = 0;
	unsigned int num;

	if (n >= 0)
	{
		num = (unsigned int)n;
		res = d(num);
	}
	else
	{
		res = eq_pos(n);
	}
	return (res);
}

/**
 * eq_pos - convert a negative number into it's positive
 * equivalent and prints
 * @n: negative interger
 *
 * Return: The number of characters printed
 */
int eq_pos(int n)
{
	unsigned int ui_max = 4294967295;
	int res = d(ui_max + (n + 1));

	return (res);
}

/**
 * d - prints a unsigned int
 * @n: unsigned interger
 *
 * Return: The number of characters printed
 */
int d(unsigned int n)
{
	int d = 1, r = 0;

	while (1)
	{
		if (n / (d * 10) >= 10)
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
			_putchar(((n / (d * 10)) % 10) + '0');
			d /= 10;
			r++;
		}
	}
	return (r);
}
