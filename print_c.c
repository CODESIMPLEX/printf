#include "main.h"

/**
 * print_c - A function that prints a char
 * @c: character to print
 * Return: 1 as Success
 */

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
