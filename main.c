#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
<<<<<<< HEAD
int len, len2;
len = _printf("%d", INT_MAX);
len2 = printf("%d", INT_MAX);
fflush(stdout);
if (len != len2)
{
printf("Lengths differ.\n");
fflush(stdout);
return (1);
}
return (0);
=======
	int len, len2;

	len = _printf("%d", 1024);
	len2 = printf("%d", 1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
>>>>>>> 76b63bfe47c6494190af938436789f7c5a733bb8
}
