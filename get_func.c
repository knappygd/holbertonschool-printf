#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_func - gets a function, according to a format
 * @s: the format
 *
 * Return: a pointer to the function that corresponds
 */
int (*get_func(char s))(va_list)
{
	f ft[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_d},
		{"d", print_d},
	};
	int i = 0;

	while (i < 4)
	{
		if (*(ft[i]).format == s)
			return (ft[i].func);
		i++;
	}
	return (NULL);
}
