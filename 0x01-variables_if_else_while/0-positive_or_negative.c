#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * 	if positive or negative
 * Return: Always 0
 */
int main (void)
{
	int n;

	srand(time(0);
	n = rand () - RAND_MAX /2;

	/* this is where my code goes*/
	if (n>0)
		printf("%d is positive\n", n);
	else if (n<0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}	
