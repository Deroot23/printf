#include "main.h"

/**
 * print_string - A function that prints custom string
 * @str: string as parameter to be printed
 * Return: number of characters
 */
int print_string(const char *str)
{
	int count = 0;
	int i = 0;
	char first_digit, second_digit, hex_val;

	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			hex_val = str[i];

			first_digit = (hex_val >> 4) & 0xF;
			second_digit = hex_val & 0xF;

			count += _putchar((first_digit < 10) ?
					'0' + first_digit : 'A' + first_digit - 10);
			count += _putchar((second_digit < 10) ?
					'0' + second_digit : 'A' + second_digit - 10);
		}
		else
		{
			count += _putchar(str[i]);
		}
		i++;
	}

	return (count);
}
