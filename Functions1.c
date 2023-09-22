#include "main.h"
/**
 * print_int - Print an integer with optional length modifiers 'l' and 'h'
 * @list: List of arguments
 * Return: Number of characters printed
 */
int print_int(va_list list)
{
int num = 0;
int count = 0;
int flag_plus = 0;
int flag_space = 0;
char length_modifier = '\0';
const char *format = va_arg(list, const char*);
while (*format && (*format == 'l' || *format == 'h'))
{
if (*format == 'l')
length_modifier = 'l';
else if (*format == 'h')
length_modifier = 'h';
format++;
}
if (length_modifier == 'l')
num = va_arg(list, long);
else if (length_modifier == 'h')
num = (short)va_arg(list, int);
else
num = va_arg(list, int);
if (num >= 0)
{
if (flag_plus)
{
_putchar('+');
count++;
}
else if (flag_space)
{
_putchar(' ');
count++;
}
}
else
{
_putchar('-');
count++;
num = -num;
}
count += print_number(num);
return (count);
}
/**
 * get_fun - Selects the appropriate printing function based on the format specifier.
 * @format: The format string.
 * @list: The va_list containing the arguments.
 * @funs: The array of format specifiers and corresponding printing functions. 
 * Return: The number of characters printed.
 */
int get_fun(const char *format, va_list list, fmt_t funs[])
{
int i = 0;
int found = 0;
int chars_printed = funs[i].f(list);
int pr_count = 0;
while (*format)
{
if (*format == '%')
{
format++;
while (funs[i].op != NULL)
{
if (*format == funs[i].op[0])
{
found = 1;
if (chars_printed < 0)
return (-1);
pr_count += chars_printed;
break;
}
i++;
}
if (!found)
{
_putchar('%');
_putchar(*format);
pr_count += 2;
}
}
else
{
_putchar(*format);
pr_count++;
}
format++;
}
return (pr_count);
}
