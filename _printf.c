#include "main.h"

/**
 * _printf - A function of a custom printf function
 * @format: format string to be outputed
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list par++;

			if (format[i] == '\0')
				return (-1);
			_specifiers(par_list, format, &i, &count);
		}
		else
		{_list;

	va_start(par_list, format);

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i
			count += _putchar(format[i]);
		}
		i++;
	}

	va_end(par_list);
	return (count);
}
