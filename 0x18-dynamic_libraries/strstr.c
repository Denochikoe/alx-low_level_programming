#include "main.h"
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*haystack)
	{
		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
			return haystack;

		haystack++;
	}
	return NULL;
}
