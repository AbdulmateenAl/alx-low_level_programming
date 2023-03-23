#include "main.h"

/**
 * print_number - print number from 0 - 9
 *
 * return: Always o success
 */

void print_numbers(void)
{
	char c;

	for (c = 0; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
