#include <unistd.h>
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
