#include "main.h"
/**
 * *rot13 - encodes a string using rot13.
 * @s: param 1
 * Return: an array of characters.
 */
char *rot13(char *s)
{
	int  i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = b[j];
				break;
			}
		}
	}
	return (s);
}

