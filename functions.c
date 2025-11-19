

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

