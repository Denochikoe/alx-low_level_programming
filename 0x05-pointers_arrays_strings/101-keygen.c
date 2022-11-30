#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random password generator for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, s;
	char c[] = "012345678989ABCDEFGHIJKLMNOPQRSUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];
	srand(time(NULL));
	while (s != 2772)
	{
		i = k = s = 0;
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			p[i] = c[j];
			i++;
		}
		while (c[k])
		{
			if (c[k] == (2772 - s))
			{
				p[i] = c[k];
				s += c[k];
				i++;
				break;
			}
			k++;
		}
	}
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
