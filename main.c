#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
int main(void)
{
	int len, len2;

	len = _printf("Should print a single percent sign: %%\n");
	len2 = printf("Should print a single percent sign: %%\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
