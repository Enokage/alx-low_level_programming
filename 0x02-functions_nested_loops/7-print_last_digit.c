int _putchar(char c)
{
    return write(1, &c, 1);
}

int print_last_digit(int num)
{
    int last_digit;

    if (num < 0)
        num = -num;

    last_digit = num % 10;
    _putchar(last_digit + '0');

    return last_digit;
}
