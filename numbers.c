#include "header.h"
/**
 * op_number - prints an integer (both positive and negative numbers).
 * @i: A va_list containing the integer to be printed.
 *
 * Return: The number of characters printed (excluding the null terminator).
 * If the number is negative, a minus sign is printed first,
 *  followed by the absolute value.
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

	while (x)
	{
		len = len + _putchar(var / x + '0');
		var = var % x;
		x = x / 10;
	}
	return (len);
}
