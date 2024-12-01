#include "header.h"
/**
 * op_string - prints a string to the standard output.
 * @s: A va_list containing the string to be printed.
 *
 * Return: The number of characters printed.
 * If the string is NULL, it prints "(null)" instead.
 */
int op_string(va_list s)
{
	char *str;
	int i = 0;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * op_char - prints a single character to the standard output.
 * @c: A va_list containing the character to be printed.
 *
 * Return: Always returns 1, as only one character is printed.
 */

int op_char(va_list c)
{
	char x = (char) va_arg(c, int);

	_putchar (x);

	return (1);
}
