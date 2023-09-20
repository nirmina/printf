#include "main.h"

/**
 * _putchar - write a program that print a putchar function.
 * @c: a character to print
 * Return: On success 1.
 * on error, -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * handle_string - a function used for string handling
 * @str: type char
 * Description: This function handles and prints a string
 * Return: The number of characters in the string.
 */
int handle_string(char *str)
{
	int i = 0;
	if (str == NULL)
	{
		handle_string("(null)");
		return (0);
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
