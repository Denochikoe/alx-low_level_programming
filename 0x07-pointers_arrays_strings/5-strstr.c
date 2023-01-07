#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: param 1
 * @needle: param 2
 * Return: NULL or substring.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
