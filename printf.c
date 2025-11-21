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
			if (*format == 'b')
				count += print_binary(va_arg(args, unsigned int));
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

