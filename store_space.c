#include "main.h"

/**
 * spec -A function that Extend the specifier function to handle
 * @i: Iterator
 * @par: Parameter list
 * @fmt: Format string
 * @count: Return value tracking
 *
 * Return: 0 if no case matched; 1 if case matches.
 */
int spec(va_list par, const char *fmt, int *i, int *count)
{
	int par_int;

	if (_isdigit(fmt[*i]))
	{
		if (fmt[*i + 1] == 'd' || fmt[*i + 1] == 'i')
		{
			par_int = va_arg(par, int);
			print_width(fmt[*i], par_int, count);
			*i += 1;
			return (1);
		}
		else
			return (0);
	}
	else if (fmt[*i] == 'r')
		return (r_specify(par, count));
	else if (fmt[*i] == 'b')
		return (b_specify(par, count));
	else if (fmt[*i] == 'u')
		return (u_specify(par, count));
	else if (fmt[*i] == 'o')
		return (o_specify(par, count));
	else if (fmt[*i] == 'x')
	{
	return (x_specify(par, count));
	}
	else if (fmt[*i] == 'X')
	{
	return (X_specify(par, count));
	}
	else if (fmt[*i] == 'S')
	{
	return (S_specify(par, count));
	}
	return (0);
}
