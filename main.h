#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
int _sprintf(char *buffer, const char *format, int num);
int _printf(const char *format, ...);
int handle_string(char *str);
int _putchar(char c);
#endif
