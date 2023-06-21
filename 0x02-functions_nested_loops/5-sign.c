#include <unistd.h>
/**
 * _putchar - writes a character to the standard output
 * @c: the character to be written
 *
 * Return: On success, returns the number of characters written.
 * On error, returns -1 and sets errno appropriately.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        write(1, "+", 1);
        return 1;
    }
    else if (n == 0)
    {
        write(1, "0", 1);
        return 0;
    }
    else
    {
        write(1, "-", 1);
        return -1;
    }
}
