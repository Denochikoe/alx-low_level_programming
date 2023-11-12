#include "main.h"
#include <stdlib.h>
/**
 * str_concat- allocates memory for a new pointer and concates two args
 * @s1:contains first string
 * @s2: contains 2nd string to be concat.
 * return: pointer to allocated memory containing contenated args.
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, k, l;
char *str;

if (s1 == NULL)
{
i = 0;
}
else
{
for (i = 0; s1[i]; i++)
;
}
if (s2 == NULL)
{
j = 0;
}
else
{
for (j = 0; s2[j]; j++)
;
}
k = i + j + 1;
str = malloc(k *sizeof(char));
if (str == NULL)
{
return (NULL);
}
for (l = 0; l < i; l++)
{
str[l] = s1[l];
}
for (l = 0; l < j; l++)
str[l + i] = s2[l];
str[i + j] = '\0';
return (str);
}
