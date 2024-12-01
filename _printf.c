#include "header.h"
/**
 * _printf - A custom implementation of the printf function
 * that handles format specifiers.
 *
 * @format: A string that contains the text to be printed.
 * With optional format specifiers.
 * Format specifiers start with a '%' character.
 *
 * Return: The total number of characters printed>
 * It excludes the null terminator.
 * If there is an invalid format specifier, returns -1.
 */
int _printf(const char *format, …)
{
	va_list call;
	unsigned int i, len = 0;


	va_start(call, format);


	if (!format || (format[0] == ‘%’ &&format[1] == ‘\0’))
		return (-1);
	for (i = 0; format[i] != ‘\0’; i++)
	{
		if (format[i] == ‘%’)
		{
			if (format[i + 1] == ‘%’)
			{
				_putchar(‘%’);
				i = i + 1;
				len++;
			}
			else if (op_select(format, i + 1) != ‘\0’)
			{
				length += op_select(format, i + 1)(call);
				i = i + 1;

			}
			else
			{
				_putchar(format[i]);
				len++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(call);
	return (len);
}
