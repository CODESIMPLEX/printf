#include "main.h"
#include <unistd.h>

/**
 * print_s - A function that prints a string
 * @s: string to print
 * Return: number of characters printed
 */

int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	/* If string is NULL, we have to print null */
	if (str == NULL)
		str = "(null)";

	while (str[i])
		_putchar(str[i++]);

	return (i);
}
