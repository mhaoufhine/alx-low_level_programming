#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - main entry of all arguments
 *
 * @ac: int input to count arguments
 *
 * @av: double pointer array of arguments vector
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, e, f, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		e = 0;

		while (s[e++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, e = 0; i < ac && e < len; i++)
	{
		s = av[i];
		f = 0;

		while (s[f])
		{
			str[e] = s[f];
			f++;
			e++;
		}
		str[e++] = '\n';
	}
	str[e] = '\0';

	return (str);
}
