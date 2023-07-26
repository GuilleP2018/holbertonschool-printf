#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _strlen(char *s);
int _putchar(char c);
int _printf(const char *format, ...);
int p_char(char c);
int p_str(char *s);
int p_int(int num);
int p_default(char c);
#endif
