#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
int _printf(const char *format, ...);
int handle_string(char *str);
int _putchar(char c);
int handle_int(int num);
int handle_unknown(const char **format);
#endif
