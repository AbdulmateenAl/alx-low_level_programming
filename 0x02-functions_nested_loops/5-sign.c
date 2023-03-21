#include "main.h"

/**
 * print_sign - print the sign of numbers
 * @n: The numbers to be checked
 * Return: 1 for positive number, 0 for zero, -1 for negative number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
