#include "main.h"
/**
 * print_c - print char
 * @arg: input arg
 * Return: 1
 */
int print_c(va_list arg)
{
	char c = va_arg(arg, int);

	write(1, &c, 1);
	return (1);
}
/**
 * print_s - print string
 * @arg: string inputed
 * Return: lenght of string
 */
int print_s(va_list arg)
{
	int x;
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (x = 0; s[x] != '\0' ; x++)
		;

	write(1, s, x);
	return (x);
}
/**
 * print_num - function to print a decimal / integer
 * @arg: number inputed
 * Return: int
 */
int print_num(va_list arg)
{
	int a, x = 1, len = 0;
	unsigned int y;
	char c;

	a = va_arg(arg, int);

	if (a < 0)
	{
		c = '-';
		len = len + write(1, &c, 1);
		y = a * -1;
	}
	else
		y = a;

	while (y / x > 9)
	{
		x *= 10;
	}
	while (x != 0)
	{
		c = y / x + '0';
		len = len + write(1, &c, 1);
		y = y % x;
		x = x / 10;
	}
	return (len);
}

/**
 * print_m - print the modulus operator
 * @arg: void
 * Return: int
 */

int print_m(va_list arg)
{
	char c = '%';

	(void) arg;

	write(1, &c, 1);
	return (1);
}
