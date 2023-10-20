#include "main.h"
#include <stdio.h>

/**
 * _printf - A function of a custom printf function
 * @format: format string to be outputed
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list par_list;

	va_start(par_list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			_specifiers(par_list, format, &i, &count);
		}
		else
		{
			count += _putchar(format[i]);
		}
	}
	va_end(par_list);
	return (count);
}
