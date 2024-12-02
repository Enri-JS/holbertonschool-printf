#include "header.h"
/**
 * _strcmp - cchecks which string is greater
 * @s1: first string
 * @s2: second string
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
/**
 * _strlen - checks string length
 * @str: subject string
 * Return: result
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}
/**
 * print - prints things, not as fancy as _printf but gets stuff done
 * @str: subject for printing
 * Return: str length
 */
int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}
