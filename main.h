#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
typedef struct conversion_specifiers
=======
/**
 * struct inface - interface for print
 * @id: the character, which identifies the type of the arg
 * @fn: function to run if id matches
 */

typedef struct intface
>>>>>>> 92ced225e85f9527b804ccf21289d62d5917702f
{
char cs;
int (*f )(va_list);
} c_s;


int _printf(const char *format, ...);
int print_c(va_list arg);
int print_s(va_list arg);
int print_num(va_list arg);
int print_m(va_list arg);
#endif

