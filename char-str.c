#include "header.h"
/**
 * op_string - prints a string
 * return: i, returns a string
 */
int op_string(va_list s)
{
	char *str;

	int i;

	str = va_arg(s, char *);
	if (str == '\0')

		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * op_char - prints a character
 * return: 1, returns a character
 */

int op_char(va_list c)
{
	char x = (char) va_arg(c, int);
	_putchar (x);

	return (1);
}
