#include "main.h"

/**
 * factorial - this returns the factorial number of the given number
 *
 * @n: int number to be used
 *
 * Return: the factorial of number
 */

int factorial(int n)
{
	int d;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		d = n * factorial(n - 1);
	}
			return (d);

}
