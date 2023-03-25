#include <stdio.h>
#include <stdlib.h>
#include "main.h"
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return NULL;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if(str == NULL)
	return(NULL);
	for(i = 0; i < ac; i++)
	{
		for(j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if(str[k] == '\0')
		{
			str[k + 1] = '\n';
		}
	}
	return(str);
}
