#include "main.h"
/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * handle_string - Prints a string to stdout
 * @str: The string to print
 *
 * Return: The number of characters printed
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
