#include "main.h"
/**
 * op_unsigned - prints an unsigned integer.
 * @u: va_list containing the unsigned integer to be printed.
 *
 * Return: The number of characters printed (excluding the null terminator).
 * Always returns the number of digits printed.
 */
int op_unsigned(va_list u)
{
	unsigned int n, x = 1, len = 0;


	n = va_arg(u, unsigned int);
	while (n / x > 9)
		x = x * 10;
	while (x != 0)
	{
		len = len + _putchar(n / x + '0');
		n = n % x;
		x = x / 10;
}
return (len);
}

/**
 * op_reverse - prints a string in reverse.
 * @r: va_list containing the string to be printed in reverse.
 *
 * Return: The number of characters printed.
 * Always returns the length of the string (not including the null terminator)
 *
 *int op_reverse(va_list r)
 *{
 *	int i = 0, Rlen = 0;
 *	char *s = va_arg(r, char*);
 *
 *
 *	while (s[i++] != '\0')
 *		;
 *	Rlen = i;
 *	i--;
 *	while (i >= 0)
 *{
 *		_putchar(s[i]);
 *		i--;
 *}
 *return (Rlen);
 *}
 */
