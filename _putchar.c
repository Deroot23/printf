#include "Main.h"
/**
 * _putchar - A funcion to print character
 *
 * @c: the variable to print character
 *
 * Return: return character
 */
void _putchar(char c)
{
	return (write(1, &c, 1));
}
