#include "main.h"
int _printf(const char *format, ...)
{
int count = 0;
va_list arguments;
va_start (arguments, format);
if (!format || !format[0])
return (-1);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
char c = va_arg(arguments, int);
count += _putchar(c);
}
else if (*format == 's')
{
char *str = va_arg(arguments, char *);
count += handle_string(str);
}
else if (*format == '%')
{
_putchar('%');
count++;
}
else
{
_putchar('%');
count++;
if (*format)
{
_putchar(*format);
count++;
}
}
format++;
}
}
else
{
_putchar(*format);
format++;
count++;
}
}
return (count);
}

