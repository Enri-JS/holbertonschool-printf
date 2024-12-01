#include “header.h”
/**
 * op_unsigned - prints unsigned integer
 * return: always 0
 */
int op_unsigned(va_list u)
{
	unsigned int n, x = 1, len = 0;


	n = va_arg(u, unsigned int);
	while (n / x > 9)
		x = x  10;
	while (x != 0)
	{
		len = len + _putchar(n / x + ‘0’);
		n = n % x;
		x = x / 10;
}
return (len);
}

/**
 * op_reverse - prints in reverse
 * return: always 0
 */
int op_reverse(va_list r)
{
	int i = 0, Rlen = 0;
	char *s = va_arg(r, char*);


	while (s[i++] != ‘\0’)
		;
	Rlen = i;
	i--;
	while (i >= 0)
{
		_putchar(s[i]);
		i--;
}
return (Rlen);
}
