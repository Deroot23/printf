#include "main.h"

/**
 * print_number - A function that prints integers
 * @n: number to print
 * Return: number of numbers printed
 */
int print_number(int n)
{
	int j;
	int i;
    int count = 0;
    char *min_int;
    char n_arr[20];

    if (n == INT_MIN)
    {
        min_int = "-2147483648";
        count += _puts(min_int);
        return count;
    }

    if (n < 0)
    {
        count += _putchar('-');
        n = -n;
    }

    if (n == 0)
    {
        count += _putchar('0');
        return count;
    }

    
    for (i = 0; n > 0; i++)
    {
        n_arr[i] = '0' + n % 10;
        n /= 10;
    }

    count += i;

    for (j = i - 1; j >= 0; j--)
    {
        _putchar(n_arr[j]);
    }

    return count;
}
