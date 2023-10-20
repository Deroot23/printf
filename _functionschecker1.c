#include "main.h"

/**
 * r_specify - handle r
 * @par: parameter list
 * @count: number of characters
 * Return: integer (count)
 */
int r_specify(va_list par, int *count)
{
	const char *par_str = va_arg(par, char *);

	par_str = va_arg(par, char *);
	if (par_str == NULL)
	{
		(*count) += _puts("(null)");
	}
	(*count) += _revputs(par_str);
	return (1);
}

/**
 * b_specify- A functon that handles b
 * @par: parameter list
 * @count: number of characters
 * Return: integer (count)
 */
int b_specify(va_list par, int *count)
{
	int bin = va_arg(par, int);

	(*count) += _binary(bin);
	return (1);
}

/**
 * u_specify -a function that  handle r
 * @par: parameter list
 * @count: number of characters
 * Return: integer (count)
 */
int u_specify(va_list par, int *count)
{
	unsigned int par_int = va_arg(par, unsigned int);

	(*count) += print_unsignedd(par_int);
	return (0);
}

/**
 * o_specify - A function that handle o
 * @par: parameter list
 * @count: number of characters
 * Return: integer (count)
 */
int o_specify(va_list par, int *count)
{
	int par_int = va_arg(par, unsigned int);

	(*count) += print_octal(par_int);
	return (0);
}



/**
 * x_specify - A handle x
 * @par: parameter list
 * @count: number of characters
 * Return: integer (count)
 */
int x_specify(va_list par, int *count)
{
	int par_int = va_arg(par, unsigned int);
	(*count) += print_hex(par_int, 0);
	return (0);
}
