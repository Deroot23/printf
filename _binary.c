#include "main.h"

/**
 * _binary -A function that prints decimals in binary
 * @n: decimal number to be converted to binary
 * Return: returns the number of characters printed
 */

int _binary(unsigned int n)
{
	int i = 31;
	int bit = 0;
	int leading_zeros = 1;
	int count = 0;

	while (i >= 0)
	{
		bit = (n >> i) & 1;
		if (bit == 0 && leading_zeros)
		{
			i--;
			continue;
		}
		count += _putchar('0' + bit);
		leading_zeros = 0;
		i--;
	}
	if (count == 0)
	count += _putchar('0');
	return (count);
}
