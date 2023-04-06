#include "main.h"

/**
 * _pow_recursion - The return value of x raised to the power of y
 *
 * @x: int number to raise
 *
 * @y: int exponenet to be used for power
 *
 * Return: int result of power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
