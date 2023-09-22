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
 * print_ch - Print a character
 * @list: List of arguments
 * Return: Number of characters printed
 */
int print_ch(va_list list)
{
char c = va_arg(list, int);
return (_putchar(c));
}
/**
 * print_str - Print a string
 * @list: List of arguments
 * Return: Number of characters printed
 */
int print_str(va_list list)
{
char *str = va_arg(list, char *);
int count = 0;
if (str == NULL)
str = "(null)";
while (*str)
{
count += _putchar(*str);
str++;
}
return (count);
}
/**
 * print_pct - Print a percent symbol
 * Return: Number of characters printed
 */
int print_pct(va_list list)
{
(void)list;
return (_putchar('%'));
}
/**
 * print_number - Print a positive integer
 * @n: Integer to print
 * Return: Number of characters printed
 */
int print_number(int n)
{
int count = 0;
if (n / 10)
count += print_number(n / 10);
count += _putchar((n % 10) + '0');
return (count);
}
