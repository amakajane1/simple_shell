#include "main.h"

/**
 * _strlen - returns string length
 *
 * @s: character
 * @i - integer
 *
 * Return: returns lenght
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}



/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
 * print_number - Prints an integer to stdout using recursion.
 * @n: Number to print to stdout.
 *
 * Return: None.
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	} else
		m = n;

	if (m < 10)
		_putchar(m % 10 + 48);
	else
	{
		print_number(m / 10);
		_putchar(m % 10 + 48);
	}
}
