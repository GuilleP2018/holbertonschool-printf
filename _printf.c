#include "main.h"

/**
 * _printf - A simplier function of printf
 * @format: format
 * Return: characters printed
 */

int _printf(const char *format, ...)
{
	int i, j;
	int count = 0;
	va_list args;
	c_s specs[] = {
		{'c', print_c},
		{'s', print_s},
		{'i', print_num},
		{'d', print_num},
		{'%', print_m},
		{'\0', NULL}
	};

	va_start(args, format);
	for (i = 0; format[i]; i++)
		if (format[i] == '%')
		{
			i++;
			for (; format[i] != '\0'; i++)
			{
				for (j = 0; specs[j].cs != '\0'; j++)
					if (format[i] == specs[j].cs)
					{
						count += specs[j].f(args);
						for (i = 0; ids[i].id != '\0'; i++)
							if (format[x] == ids[i].id)
							{
								count += ids[i].fn(lst);
								break;
							}
						if (specs[j].cs)
							break;
					}
				if (format[i] == '\0')
					return (-1);
			}
			else
			{
				write(1, &format[i], 1);
				count += 1;
			}

			va_end(args);
			return (count);
		}
