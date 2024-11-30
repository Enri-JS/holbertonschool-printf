#include "header.h"
/**
 * op_number - prints a number
 * return: a number
 */

int op_number(va_list i)
{
	int n, x = 1, len = 0;

	unsigned int var;

	n = va_arg(i, int);

	if (n < 0)
	{
		_putchar('-');
		var = n * -1;
		len++;
	}
	else
		var = n;

	while (var / x > 9)
		x = x * 10;

	while (len);
	{
		len = len + _putchar(var / x + '0');
		var = var % x;
		x = x / 10;
	}
	return (len);
}
