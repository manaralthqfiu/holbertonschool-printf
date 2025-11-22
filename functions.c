#include "main.h"
#include <unistd.h>

/**
 * _putchar - buffered character output (1024 bytes buffer)
 * @c: character to print (if c == -1, flush buffer)
 *
 * Return: 1 always
 */
int _putchar(char c)
{
    static char buffer[1024];
    static int index;
    int printed = 1;

    if (c == -1 || index == 1024)
    {
        if (index > 0)
            write(1, buffer, index);
        index = 0;
    }

    if (c != -1)
        buffer[index++] = c;

    return (printed);
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
        count += _putchar(str[i++]);

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
    {
        num = n;
    }

    if (num / 10)
        count += print_number(num / 10);

    count += _putchar((num % 10) + '0');

    return (count);
}

