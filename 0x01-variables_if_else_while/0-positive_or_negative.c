#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */




/*
 * main - Main Block
 * Description: Get a Random number and print the number
 * and if it is positive, negative and zero
 * Return: 0
 */
int main(void)
{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);

}
