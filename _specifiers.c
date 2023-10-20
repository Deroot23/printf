#include "main.h"
/**
 * _specifiers - A function Handles format specifiers of our custom printf.
 * @i: Iterator
 * @par_list: Parameter list
 * @format: Format string
 * @count: Return value tracking
 * Return: return the newspecificier
 */
int _specifiers(va_list par_list, const char *format, int *i, int *count)
{
	ops _specifys[] = {
		{'c', for_c},
		{'s', for_s},
		{'p', for_p},
		{'d', for_d},
		{'i', for_i},
		{'X', X_specify},
		{'x', x_specify},
		{'b', b_specify},
		{'o', o_specify},
		{'u', u_specify},
		{'S', S_specify},
		{'r', r_specify},
		{'\0', NULL},
	};

	char newspecifer = format[*i];
	int j = 0;

	for (j = 0; _specifys[j].op != '\0'; j++)
		if (_specifys[j].op == newspecifer)
			_specifys[j].spc(par_list, count);
			return (0);
	if (newspecifer != '%')
		(*count) += _putchar('%');
	(*count) += _putchar(newspecifer);
	return (0);
}
