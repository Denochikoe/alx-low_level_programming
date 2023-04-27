#include "main.h"
#include <stdlib.h>
/**
 * str_concat- allocates memory for a new pointer and concates two args
 * @s1:contains first string
 * @s2: contains 2nd string to be concat.
 * return: pointer to allocated memory containing contenated args.
 */
char *str_concat(char *s1, char *s2)
{
	int end1, end2, i = 0;
	char *s;

	if(s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}
	for(end1 = 0; end1 <= *s1; end1++)
	{
	}
	for(end2 = 0; end2 <= *s2; end2++)
	{
	}

	s = malloc(sizeof(char) * (end1 + end2 + 1));

	if(s == NULL)
		return(NULL);

	while(*s1)
	{
		s[i] = *s1;
		i++;
		s1++;
	}
	while(*s2)
	{
		s[i] = *s2;
		i++;
		s2++;
	}
	return(s);

}
