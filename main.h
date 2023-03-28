#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list n);
int (*get_func(char *s))(va_list);

typedef struct format
{
	char *format;
	int (*f)(va_list);
	int r = f;
} format;

#endif
