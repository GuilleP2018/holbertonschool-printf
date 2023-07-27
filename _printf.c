#include "main.h"
#include <stdio.h>

/**
 * _printf - Printf function
 * @format: format
 * Return: Printed chars
 */

int _printf(const char *format, ...)
{
	int x,i;
	int count = 0;
	va_list list;
	interface ids[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'i', _print_int},
		{'d', _print_int},
		{'%', _print_mod},
		{'\0', NULL},

	};
	
	va_start(list, format);
	for (x = 0; format[x]; x++)
		if (format[x]; == '%')
		{
			x++;
			for (; format[x] != '\0'; x++)
			{
				for (i = 0; ids[i].id != '\0'; i++)
					if (format[x] == ids[i].id)
					{	
					 	count += ids[i].fn(lst);
						break;
					
					}
				if (ids[i].id)
					break;

				}
				if (format[x] == '\0')
					return (-1);
			}
			else
			{
				write(1, &format[x], 1);
				count += 1;
			}
	va_end(list);
	return (count);
}
