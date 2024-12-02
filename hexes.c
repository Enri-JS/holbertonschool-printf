#include "main.h"

int is_lowercase(char);
char *string_to_upper(char *);

/**
 * op_hexL - lower end hexadecimals for printing
 * @list: content
 * Return: size
 */
int op_hexL(va_list list)
{
	char *ptr;
	int size;

	ptr = itoa(va_arg(list, unsigned int), 16);

	size = print((ptr != NULL) ? ptr : "NULL");

	return (size);
}
/**
 * op_hexU - higher end hexadecimals for printing
 * @list: content
 * Return: size
 */
int op_hexU(va_list list)
{
	char *ptr;
	int size;

	ptr = itoa(va_arg(list, unsigned int), 16);
	ptr = string_to_upper(ptr);

	size = print((ptr != NULL) ? ptr : "NULL");

	return (size);
}
/**
 * is_lowercase - verifies if char is lowercase or not
 * @c: subject char
 * Return: binary
 */
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}
/**
 * string_to_upper - makes the lower upper
 * @s: subject string
 * Return: converted string
 */
char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
