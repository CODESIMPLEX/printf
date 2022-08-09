#include "main.h"

/**
 * _printf - function for format printing
 * @format: list of arguments to printing
 * Return: number of characters to printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int (*action)(va_list);
	unsigned int i = 0, counter = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter++;
				i += 2;  /* skip % position */
				continue;
			}
			else
			{
				action = handle_printer_type(&format[i + 1]);
				if (action == NULL)
					return (-1);
				i += 2;
				counter += action(ap);
				continue;
			}
		}
		i++;
	}
	va_end(ap);
	return (counter);
}
