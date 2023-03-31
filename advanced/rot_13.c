#include "../main.h"

/**
 * rot_13 - prints the rot13'ed string
 * @vl: va_list
 *
 * Return: The number of characters printed
 */
int rot_13(va_list vl)
{
        char *s = va_arg(vl, char *);
        char *r_13 = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
        int i, j, res = 0;

        for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; r_13[j] != '\0'; j++)
                {
                        if (s[i] == r_13[j])
                        {
                                if (j >= 0 && j <= 25)
                                        _putchar(r_13[j + 26]);
                                else
                                        _putchar(r_13[j - 26]);
                                res++;
                        }
                }
        }
        return (res);
}
