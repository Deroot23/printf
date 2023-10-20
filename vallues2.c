#include "main.h"
/**
 *for_d - A function that handle o
 *@par_list: parameter list
 *@count: number of characters
 *Return: integer (count)
 */
int for_d(va_list par_list, int *count)
{
	int par_int = va_arg(par_list, int);
	(*count) += print_number(par_int);
	return (0);
}
/**
 * for_i - A function that handle o
 * @par_list: parameter list
 * @count: number of characters
 * Return: integer (count)
 */
int for_i(va_list par_list, int *count)
{
	int par_int = va_arg(par_list, int);
	(*count) += print_number(par_int);
	return (0);
}
