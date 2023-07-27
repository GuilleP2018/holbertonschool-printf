#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct inface - interface for print
 * @id: the character, which identifies the type of the arg
 * @fn: function to run if id matches 
 */

typedef struct intface
{
	char id;
	int (*fn)(va_list);
} interface;

int _printf(const char *format, ...);
int _print_char(va_list ls);
int _print_mod(va_list ls);
int _print_string(va_list ls);
int _primnt_int(va_list ls);
#endif
