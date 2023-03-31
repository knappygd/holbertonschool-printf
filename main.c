#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned int ui;

    ui = (unsigned int)INT_MAX + 1024;
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("%r\n", "Hello");
    _printf("%b\n", 10);
    _printf("%R\n", "naNA");
    return (0);
}
