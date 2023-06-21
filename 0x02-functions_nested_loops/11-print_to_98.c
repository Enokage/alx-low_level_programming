#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: the character to be written
 *
 * Return: On success, returns the number of characters written.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            _putchar(n / 10 + '0');
            _putchar(n % 10 + '0');

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else
    {
        for (; n >= 98; n--)
        {
            _putchar(n / 10 + '0');
            _putchar(n % 10 + '0');

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }

    _putchar('\n');
}
