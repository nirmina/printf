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
 * handle_int - prints integer
 * @num: the integer to be printed
 *
 * Return: the number of characters printed
 */
int handle_int(int num)
{
int count = 0;
int digit;
if (num < 0)
{
_putchar('-');
count++;
num = -num;
}
if (num == 0)
{
_putchar('0');
count++;
}
else
{
int rev = 0; /* reverse the num */
while (num > 0)
{
digit = num % 10;
rev = rev * 10 + digit;
num /= 10;
}
while (rev > 0)
{
_putchar(rev % 10 + '0');
rev /= 10;
count++;
}
}
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

