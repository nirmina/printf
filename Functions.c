#include "main.h"
/**
 * _putchar - write a program that print a putchar function.
 * @c: a character to print
 * Return: On success 1.
 *         On error, -1 is returned.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * handle_string: a function used for string handling
 * @str: type char
 * Description: handle_string is a function for strin handling
 * Return: number of caracter
 */
int handle_string(char *str)
{
int i = 0;
if (str == NULL)
{
handle_string("(null)");
return;
}
while (str[i])
{
putchar(str[i]);
i++;
}
return (i);
}
