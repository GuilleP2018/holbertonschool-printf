#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct conversion_specifiers
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

