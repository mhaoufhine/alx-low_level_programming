#include "main.h"

/**
 * _islower - check for lowercase characters
 * @c: - The character to be checked
 *
 * Return: 1 if character is lowercase, 0 anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}

	return (0);
}
