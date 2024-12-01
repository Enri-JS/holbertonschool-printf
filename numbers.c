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
	int n = va_arg(i, int);
	int x = 1;
	unsigned int var;
	int len = 0;

	if (n < 0)
	{
		_putchar('-');
		var = -n;
		len++;
	}
	else
	{
		var = n;
	}

	if (var == 0)
	{
		_putchar('0');
		return (1);
	}

	while (var / x >= 10)
		x *= 10;

	while (x)
	{
		len += _putchar(var / x + '0');
		var %= x;
		x /= 10;
	}
	return (len);
}
