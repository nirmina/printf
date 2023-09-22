#include "main.h"
/**
 * _printf - functions as printf
 * @format: specifiers
 * Return:  the number of characters printed
 *	(excluding the null byte used to end output to stringsi)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && format[1])
		{
			format++;
			if (*format == 'c')
				count += _putchar(va_arg(args, int));
			else if (*format == 's')
				count += handle_string(va_arg(args, char *));
			else if (*format == '%')
				count += _putchar('%');
			else
			{
				count += _putchar('%');
				count += _putchar(*format);
			}
		}
		else if (*format == '%' && format[1] == '\0')
		{
			return (-1);
		}
		else
		count += _putchar(*format);
	format++;
	}
	va_end(args);
	return (count);
}
