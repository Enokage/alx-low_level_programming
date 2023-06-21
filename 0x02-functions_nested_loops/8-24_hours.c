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
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
    int hours, minutes;

    for (hours = 0; hours < 24; hours++)
    {
        for (minutes = 0; minutes < 60; minutes++)
        {
            _putchar((hours / 10) + '0');
            _putchar((hours % 10) + '0');
            _putchar(':');
            _putchar((minutes / 10) + '0');
            _putchar((minutes % 10) + '0');
            _putchar('\n');
        }
    }
}
