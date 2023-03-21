#include "main.h"

/**
 * _isalpha - detect lower or uppercase letters
 * Return: 1 for a letter either lowercase or uppercase or 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c > 65 && c <= 90) || (c > 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
