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
    /*int len;
    int len2;
    char *s = "Hola Mundo";
    char c = 'a';*/
	
    _printf("%d\n", 12345);
    printf("%d\n", 12345);
    _printf("%i\n", -12345);
    printf("%i\n", -12345);
    _printf("%d\n", INT_MAX);
    _printf("%d\n", INT_MIN);
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);

    return (0);
}
