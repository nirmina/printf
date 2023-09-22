#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
int pr_count = 0;
va_list list;
fmt_t funs[] = {
{"c", print_ch},
{"s", print_str},
{"%", print_pct},
{"d", print_int},
{"i", print_int},
{NULL, NULL}
};
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(list, format);
pr_count = get_fun(format, list, funs);
va_end(list);
return (pr_count);
}
