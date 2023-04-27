#include "main.h"
/**
 * _islower - function checks for lowercase character
 * @c: a character argument
 * Return: 1 and 0 depending on condition
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
