#include "main.h"

/**
 * print_null - prints (null)
 * @par_str: string parameter
 * @count: number of characters printed
 */

void print_null(const char *par_str, int *count)
{
	if (par_str == NULL)
	{
		(*count) += _puts("(null)");
		return;
	}
	(*count) += _puts(par_str);
}
