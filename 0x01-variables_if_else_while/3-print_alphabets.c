#include <stdio.h>

/**
 * main-Entry point
 *
 * Description: 'the program outputs {a..z}{A..Z} in one line!'
 *
 * Return: Always (0) success
 *

{
	char i;

	i = 'a';
	while (i <= 'z')
	{
	putchar(i);
	i++;
	}
	i = 'A';	
	while (i <= 'Z')
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
