#include <stdio.h>
/**
 * main - Entry point 
 * Return: always 0(success)
 */
int main(void)
{
	printf("size of a char: %d byte(s)", sizeof(char));
	printf("size of an init: %d byte(s)", sizeof(int));
	printf("size of long int: %d byte(s)", sizeof(longint));
	printf("size of a long long int: %d byte(s)", sizeof(long long int));
	printf("size of float: %d byte(s", sizeof(float));
	return (0);
