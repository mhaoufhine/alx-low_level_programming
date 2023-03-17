#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)

{
	int 1;
	long int 2;
	long long int 3;
	char 4;
	float 5;

	printf("Size of an int:%lu byte(s)\n", sizeof(1));
	printf("Size of a long int:%lu byte(s)\n", sizeof(2));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(3));
	printf("Size of a char:%lu byte(s)\n", sizeof(4));
	printf("Size of float:%lu bytte(s)\n", sizeof(5));
	return (0);

}

	
