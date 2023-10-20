#include "main.h"
/**
 *for_c - A function that handle o
 * @par_list: parameter list
 * @count: number of characters
 * Return: integer (count)
 */
int for_c(va_list par_list, int *count)
{
	char par = va_arg(par_list, int);
	(*count) += _putchar(par);
	return (0);
}
/**
 * for_s - A function that handle o
 *@par_list: parameter list
 *@count: number of characters
 *Return: integer (count)
 */
int for_s(va_list par_list, int *count)
{
	char *par_str = va_arg(par_list, char *);

	print_null(par_str, count);

	return (0);
}
/**
 * for_percent - A function that handle o
 * @par_list: parameter list
 * @count: number of characters
 * Return: integer (count)
 */
int for_percent(va_list par_list, int *count)
{
	char par = va_arg(par_list, int);
	(*count) += _putchar(par);
	return (0);
}
/**
 * for_p - A function that handle o
 * @par_list: parameter list
 * @count: number of characters
 * Return: integer (count)
 */
int for_p(va_list par_list, int *count)
{
	void *ptr = va_arg(par_list, void*);
	(*count) += _putchar('0');
	(*count) += _putchar('x');
	(*count) += pnt_ads(ptr);
	return (0);
}
