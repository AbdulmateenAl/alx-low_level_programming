#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/** main -  Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */

	int m;

	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and it is greater than 5\n", n, m);
	
	return (0);
}
