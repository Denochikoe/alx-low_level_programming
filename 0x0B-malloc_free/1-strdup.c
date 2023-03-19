#include <stdlib.h>
#include "main.h"
char *_strdup(char *str)
{
	int i, j;
	char *newstr;

	if(str == NULL)
	{
		return(NULL);
	}
	for(i = 0; str[i]; i++)
	;
	i++;
	newstr = malloc(sizeof(char) * i);
	if(newstr == NULL)
		return(NULL);
	for(j = 0; j < i; j++)
	{
		newstr[j] = str[j];
		return(newstr);
	}
	return(0);
}
