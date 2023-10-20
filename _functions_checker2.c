#include "main.h"

/**
 * X_specify -A function that handle X
 * @par: parameter list
 * @count: number of characters
 * Return: integer (count)
 */
int X_specify(va_list par, int *count)
{
	int par_int = va_arg(par, unsigned int);

	(*count) += print_hex(par_int, 0);
	return (0);
}

/**
 * S_specify - a function that handle S
 * @par: parameter list
 * @count: number of characters
 * Return: integer (count)
 */
int S_specify(va_list par, int *count)
{
	const char	*par_str = va_arg(par, char *);

	if (par_str == NULL)
	{
		(*count) += _puts("(null)");
	}
	(*count) += print_string(par_str);

	return (0);
}
/**
 * pnt_ads - a function that handle address
 *  @ptr: parameter list
 *  Return: integer (count)
 */
int pnt_ads(void *ptr)
{
	uintptr_t ads = (uintptr_t)ptr;
	char buffer[16];
	int i = 0;
	int j, count;

	while (ads > 0)
	{
		int digit = ads % 16;

		if (digit < 10)
			buffer[i] = '0' + digit;
		else
			buffer[i] = 'a' + (digit - 10);
	ads /= 16;
	i++;
	}
	count = 0;
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}
	return (count);
}
/**
 * p_specifieer - a function that handle p
 *  @par: parameter list
 *  @count: number of characters
 *  Return: integer (count)
 */
int p_specifieer(va_list par, int *count)
{
	void *ptr = va_arg(par, void*);

	pnt_ads(ptr);
	(*count) += pnt_ads(ptr);
		return (1);
}
