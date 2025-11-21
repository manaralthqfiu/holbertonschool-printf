#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Format string
 * Return: Number of characters printed
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
				return (-1);
			if (*format == 'u')
				count += print_unsigned(va_arg(args, unsigned int));
			else if (*format == 'o')
				count += _octal(va_arg(args, unsigned int));
			else if (*format == 'x')
				count += print_hex(va_arg(args, unsigned int), 0);
			else if (*format == 'X')
				count += print_hex(va_arg(args, unsigned int), 1);
			else
			{
				count += _putchar('%');
				count += _putchar(*format);
			}
		}
		else
			count += _putchar(*format);
		format++;
	}

	va_end(args);
	return (count);
}

