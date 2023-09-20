#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
va_start(args, format);
while (*format)
{
if (*format != '%')
count += _putchar(*format);
else
{
format++;
if (*format == 'c')
count += _putchar(va_arg(args, int));
else if (*format == 's')
count += handle_string(va_arg(args, char *));
else if (*format == '%')
count += _putchar('%');
else if (*format == 'd' || *format == 'i')
count += handle_int(va_arg(args, int));
else
{
count += _putchar('%');
count += _putchar(*format);
}
}
format++;
}
va_end(args);
return (count);
}
