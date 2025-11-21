#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_unsigned - prints an unsigned integer in decimal
 * @n: The unsigned integer to print
 *
 * Return: Number of characters printed
 */
int print_unsigned(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_unsigned(n / 10);
	count += _putchar((n % 10) + '0');
	return (count);
}
/**
 * _octal - prints an unsigned integer in octal
 * @n: The unsigned integer to print
 *
 * Return: Number of characters printed
 */
int _octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += _octal(n / 8);
	count += _putchar((n % 8) + '0');
	return (count);
}
/**
 * print_hex - prints an unsigned integer in hexadecimal
 * @n: The unsigned integer to print
 * @uppercase: If non-zero, use uppercase letters; otherwise lowercase
 *
 * Return: Number of characters printed
 */
int print_hex(unsigned int n, int uppercase)
{
	int count = 0;
	char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (n / 16)
		count += print_hex(n / 16, uppercase);
	count += _putchar(digits[n % 16]);
	return (count);
}
