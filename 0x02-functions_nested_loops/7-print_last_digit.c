#include "main.h"

/**
 * print_last_digit - To print the last digit of a number
 * @c: The number to be computed
 * Return: The last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
