#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string followed by a new line
 *
 * @s:string expected to be printed
 *
 * Retun: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else

	{

	_putchar('\n');

	}

}
