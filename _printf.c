#include "main.h"

/**
 * _printf - Printf function
 * @format: format
 * Return: Printed chars
 */

int _printf(const char *format, ...)
{
	int x, printed = 0, printed_chars = 0;
	va_list lst;

	if (format == NULL)
		return (-1);

	va_start(lst, format);

	for (x = 0; format && format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
		 write(1, &format[x], 1);
			printed_chars++;
		}
		else
		{
			printed = handle_print(format, &x, lst);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	va_end(lst);
	return (printed_chars);
}
