#include "main.h"
#include <stdarg.h>

/**
 * handle_printer_type - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
 */

int (*handle_printer_type(const char *format))(va_list)
{
	int i;
	printer_types p[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	for (i = 0; p[i].type != NULL; i++)
	{
		if (*(p[i].type) == *format)
			break;
	}

	return (p[i].print);
}
