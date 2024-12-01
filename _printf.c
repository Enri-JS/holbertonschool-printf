#include "header.h"
/**
 * _printf - printf function
 * return: returns a format
 */
int _printf(const char *format, …)
{
	va_list call;
	unsigned int i, len = 0;


	va_start(call, format);


	if(!format || (format[0] == ‘%’ && format[1] == ‘\0’))
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
