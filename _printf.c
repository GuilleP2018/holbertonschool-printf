#include "main.h"

/**
 * _printf - A simplier function of printf
 * @format: format
 * Return: characters printed
 */

int _printf(const char *format, ...)
{
	/**
	 *Variables / input
	 */
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
	/*Run*/
	for (i = 0; format[i]; i++)
	{
		/*check spec, if not got to else*/
		if (format[i] == '%')
		{
			/*check space after %*/
			i++;
			/*check if space after % is null*/
			for (; format[i] != '\0'; i++)
			{
				/*check that spec[] is not null*/
				for (j = 0; specs[j].cs != '\0'; j++)
					/*if we find matching spec in given string and spec[] then run*/
					if (format[i] == specs[j].cs)
					{
						/*increase count (return value) and run whichever specifier function that matches*/
						count += specs[j].f(args);
						break;
					}
				/*reset for specs{} */	
				if (specs[j].cs)
					break;
			}
			/*check if input string is null*/
			if (format[i] == '\0')
				return (-1);
		}
		/*if no specifier found (%) print what is in the position of i in the input string (format[])*/
		else
		{
			write(1, &format[i], 1);
			count += 1;
		}
	}
	va_end(args);
	return (count);
}
