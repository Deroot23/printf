#include "main.h"

/**
 * print_width - A function that pads our print num function with
 * @c: char containing width
 * @n: int
 * @counter: the number of bytes counter
 */
void print_width(char c, int n, int *counter)
{
	int i, sp_len, width, copy, digits;

	width = c - '0'; /* set c to an int */
	digits = (n == 0) ? 1 : 0;
	copy = n;
	if (copy < 0)
	{
		copy *= -1;
		digits++;
	}
	while (copy > 0)
	{
		copy /= 10;
		digits++;
	}
	if (digits >= width)
		*counter += print_number(n);
	else
	{
		sp_len = width - digits;
		for (i = 0; i < sp_len; i++)
			_putchar(' ');
		*counter += sp_len;
		*counter += print_number(n);
	}
}
