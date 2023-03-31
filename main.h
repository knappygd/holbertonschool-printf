#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char);
int print_c(va_list);
int print_s(va_list);
int print_d(va_list);
int (*get_func(char))(va_list);
int reco_array(char);
int _abs(int);
int reverse(va_list);
int decimal(va_list);
int rot_13(va_list);
int hex(va_list);
int x_to_upper(va_list);
int print_per(va_list);
int bin(va_list);
int baseconv(unsigned int, unsigned int);
int eq_pos(int);
int d(unsigned int);

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
