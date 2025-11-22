#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: Format string
 *
 * Return: Number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    if (!format || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;

            if (*format == '\0')
            {
                va_end(args);
                _putchar(-1);
                return (-1);
            }

            if (*format == 'c')
                count += _putchar(va_arg(args, int));
            else if (*format == 's')
                count += print_string(va_arg(args, char *));
            else if (*format == 'd' || *format == 'i')
                count += print_number(va_arg(args, int));
            else if (*format == 'u')
                count += print_unsigned(va_arg(args, unsigned int));
            else if (*format == 'o')
                count += _octal(va_arg(args, unsigned int));
            else if (*format == 'x')
                count += print_hex(va_arg(args, unsigned int), 0);
            else if (*format == 'X')
                count += print_hex(va_arg(args, unsigned int), 1);
            else if (*format == '%')
                count += _putchar('%');
            else
            {
                count += _putchar('%');
                count += _putchar(*format);
            }
        }
        else
        {
            count += _putchar(*format);
        }

        format++;
    }

    va_end(args);
    _putchar(-1); /* flush buffer */

    return (count);
}

