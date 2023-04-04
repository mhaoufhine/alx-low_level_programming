#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: string to set
 *
 * @to: string to change pointer to char
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
