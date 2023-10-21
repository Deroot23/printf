#include "main.h"

/**
 * _specifiers - A function Handles format specifiers of our custom printf.
 * @i: Iterator
 * @par_list: Parameter list
 * @format: Format string
 * @count: Return value tracking
 */
void _specifiers(va_list par_list, const char *format, int *i, int *count)
{
	char parameter, *par_str;
	int par_int, status;

	if (format[*i] == 'c')
	{
		parameter = va_arg(par_list, int);
		(*count) += _putchar(parameter);
	}
	else if (format[*i] == 's')
	{
		par_str = va_arg(par_list, char *);
		print_null(par_str, count);
	}
	else if (format[*i] == '%')
	{
		(*count) += _putchar('%');
	}
	else if (format[*i] == 'd' || format[*i] == 'i')
	{
		par_int = va_arg(par_list, int);
		(*count) += print_number(par_int);
	}
	else
	{
		status = spec(par_list, format, i, count);
		if (status == 0)
		{
			(*count) += _putchar('%');
			(*count) += _putchar(format[*i]);
		}
	}
}

