#include <stdio.h>

/**
<<<<<<< HEAD
 * main- Entry point
 *
 * Description:'the program output a-z in lowercase'
 *
 *return: (0) success
=======
 * main-Entry point
 *
 * Description:'the program a-z except for q and e'
 *
 * Return (0) success
>>>>>>> e8fd24ac825c6d5e233a6f3f5fdcf946fc20ff8a
 *
 */
int main(void)
{
	char i;

<<<<<<< HEAD
	i = 'a';
	while (i = 'z')
	{
		if ( i = 'q' && i = 'e')
		{
			break;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
=======
	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'q' && i != 'e')
	putchar(i);
	}
	putchar('\n');
	return (0);
>>>>>>> e8fd24ac825c6d5e233a6f3f5fdcf946fc20ff8a
}
