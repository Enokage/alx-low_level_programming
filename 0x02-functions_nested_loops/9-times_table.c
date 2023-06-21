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
 * times_table - prints the 9 times table
 */
void times_table(void)
{
    int row, col, result;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            result = row * col;

            if (col != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (result < 10 && col != 0)
                _putchar(' ');

            if (result >= 10)
                _putchar((result / 10) + '0');

            _putchar((result % 10) + '0');
        }
        _putchar('\n');
    }
}
