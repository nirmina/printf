#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024
/**
 * struct fmt_op - function to check for formats
 * @op: specifier type
 * @f: The print function to use
 */
typedef struct fmt_op
{
char *op;
int (*f)(va_list);
} fmt_t;
int _printf(const char *format, ...);
int handle_flags(va_list list, const char **format, int count);
int handle_field_width(va_list list, const char **format, int count);
int handle_precision(va_list list, const char **format, int count);
int print_binary(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int print_hexadecimal(va_list list, int uppercase);
int print_ptr(va_list list);
int print_rev_str(va_list list);
int print_rot_str(va_list list);
int _putchar(char c);
int buffer_write_char(char *buffer, int *index, char c);
int buffer_write_string(char *buffer, int *index, char *str);
int buffer_write_specifier(char *buffer, int *index, char *specifier,
va_list list);
void buffer_flush(char *buffer, int *index, int *pr_count);
char *get_specifier_result(char *specifier, va_list list);
int strLen(char *str);
int print_number(int n);
int print_pct(va_list list);
int get_fun(const char *format, va_list list, fmt_t funs[]);
int print_int(va_list list);
int _putchar(char c);
int print_ch(va_list list);
int print_str(va_list list);
#define FLAG_ZERO_PADDING 1
#endif

