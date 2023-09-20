#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%' && format[1])
		{
			format++;
			if (*format == 'c')
			count += _putchar(va_arg(args, int));
			else if (*format == 's')
			count += handle_string(va_arg(args, char *));
			else if (*format == 'i' || *format == 'd')
			count += handle_int(va_arg(args, int));
			else if (*format == '%')
			count += _putchar('%');
			else
			{
			count += _putchar('%');
			count += _putchar(*format);
			}
		}
		else
		count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
