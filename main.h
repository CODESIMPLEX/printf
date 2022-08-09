#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * struct printer - structure for printing various types
 * @type: type to print
 * @print: action to be executed by the printer.
 */

/* printer */
typedef struct printer
{
	char *type;
	int (*print)(va_list);
} printer_types;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int (*handle_printer_type(const char *format))(va_list);

#endif /* MAIN_H */
