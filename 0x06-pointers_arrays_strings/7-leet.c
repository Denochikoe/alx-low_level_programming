#include "main.h"
/**
 * *leet- encodes a string to leet (1337).
 * @s: param 1
 * Return: s.
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	i = 0;
	while (*(s + i))
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = b[j];
			}
		}
	i++;
	}
	return (s);
}
