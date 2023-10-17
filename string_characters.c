nclude "main.h"
/**
 * _putchar -A function that prints character
 *
 * @c: character to be printed
 *
 * Return: the number of characters printed to standard output
 * i.e 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


#include "main.h"

/**
 * _isdigit -A function to checks if a char is a number
 * @c: char
 * Return: 1 if true and 0 if false
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}



/**
 * _puts - A function of custom puts
 * @str: pointer to array of characters (string)
 * Return: number of characters printed
 */

int _puts(const char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * _revputs - A function prints string in reverse
 * @str: pointer to array of characters
 * Return: number of characters printed
 */

int _revputs(const char *str)
{
	int len, i = 0;

	while (str[i] != '\0')
		i++;
	len = i;
	for (i -= 1; i >= 0; i--)
		_putchar(str[i]);
	return (len);
}
