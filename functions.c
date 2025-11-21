#include "main.h"
/**
* _putchar - Writes a character to stdout
* @c: Character to print
*
* Return: 1 on success
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
* print_string - Prints a string
* @str: String to print
*
* Return: Number of characters printed
*/
int print_string(char *str)
{
int count = 0;
int i = 0;
if (!str)
str = "(null)";
while (str[i])
{
count += _putchar(str[i]);
i++;
}
return (count);
}
/**
* print_number - Prints an integer
* @n: Integer to print
*
* Return: Number of characters printed
*/
int print_number(int n)
{
int count = 0;
unsigned int num;
if (n < 0)
{
count += _putchar('-');
num = -n;
}
else
num = n;
if (num / 10)
count += print_number(num / 10);
count += _putchar((num % 10) + '0');
return (count);
}
/**
 * print_binary - Prints an unsigned integer in binary
 * @n: Unsigned integer to print
 *
 * Return: Number of characters printed
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += print_binary(n / 2);
	count += _putchar((n % 2) + '0');
	return (count);
}

