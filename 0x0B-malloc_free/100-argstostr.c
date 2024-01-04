#include "main.h"
#include <stdlib.h>
/**
 * argstostr- concatenates arg to string
 * ac: argument count
 * av: argument vector
 * Return: NULL or string
 */
char **argstostr(int ac, char **av)
{
	int i, j, k;
	char *results, *str;

	if (ac == NULL || av == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		str = av[i];
		while ( str != '\0')
		{
			j++;
			str++;
		}
		j++;
	}
	results = (char *)malloc(j + 1);
	if (results == NULL)
		return (NULL);

}
