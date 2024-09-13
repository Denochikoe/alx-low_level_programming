#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s)
	{
		while (*a)
		{
			if (*s == *a)
				return s;
			a++;
		}
		s++;
	}
	return NULL;
}
