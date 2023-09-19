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
