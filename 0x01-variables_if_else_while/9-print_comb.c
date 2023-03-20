#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++) {
		printf("%d", i);
		if (i < 10)
			printf(", ");
	}
	printf("\n");
	return (0);
}
