#include "main.h"
/**
 * _putchar - Write a character to stdout
 * @c: The character to write
 * Return: On success, 1.
 * On error, -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * handle_string - Print a string
 * @str: String to print
 * Return: Number of characters printed (excluding null byte)
 */
int handle_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * _sprintf - prints integer
 * @buffer: the stored integer to be printed
 * @format: the format
 * @num: the va_int
 * Return: the number of characters printed
 */
int _sprintf(char *buffer, const char *format, int num)
{
	int count = 0;
	int temp, digits, divisor, digit, i;

	while (*format)
	{
		if (*format == '%' && format[1] == 'd')
		{
			format++;
			format++;
			temp = num;
			digits = 0;
			while (temp != 0)
			{
				temp /= 10;
				digits++;
			}
			if (num < 0)
			{
				buffer[count++] = '-';
				num = -num;
			}
			divisor = 1;
			for (i = 1; i < digits; i++)
			{
				divisor *= 10;
			}
			while (divisor > 0)
			{
				digit = num / divisor;
				buffer[count++] = digit + '0';
				num %= divisor;
				divisor /= 10;
			}
		}
		else
			buffer[count++] = *format;
			format++;
	}
	buffer[count] = '\0';
	return (count);
}
/**
 * handle_unknown - Handle unknown format specifiers in _printf
 * @format: Pointer to the format string being processed
 * Return: The number of characters printed for the unknown specifier
 */
int handle_unknown(const char **format)
{
int count = 0;
_putchar('%');
_putchar(**format);
count += 2;
(*format)++;
return (count);
}
