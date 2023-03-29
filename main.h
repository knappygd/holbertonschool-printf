#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list n);
int (*get_func(char s))(va_list);
int reco_array(char c);
int _abs(int n);

/**
 * struct format - data of functions
 * @format: string
 * @func: pointer to function
 *
 * Description: struct to prints in different formats
 */
typedef struct format
{
	char *format;
	int (*func)(va_list);
} f;

#endif
