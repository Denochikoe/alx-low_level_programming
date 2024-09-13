#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
				break;
		}
		if (!*a)
			break;
		s++;
		len++;
	}
	return len;
}
