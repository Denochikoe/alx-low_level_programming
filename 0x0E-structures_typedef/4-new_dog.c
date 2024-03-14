#include "dog.h"
#include <stdlib.h>
/**
 * new_dog- pointer to struct
 * @name: param 1
 * @age: param 2
 * @owner: param 3
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;

	dog_t *dog;
	if (name == NULL || owner == NULL)
	{
		return(NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return(NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	dog->name = malloc(sizeof(char) * i);
	if (dog->name == NULL)
	{
		free(dog);
		return(NULL);
	}
	for (k = 0; k < i; k++)
	{
		dog->name[k] = name[k];
	}
	dog->age = age;
	for (j = 0; owner[j]; j++)
		;
	j++;
	dog->owner = malloc(sizeof(char) * j);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return(NULL);
	}
	for (k = 0; k < j; k++)
	{
		dog->owner[k] = owner[k];
	}
		return(dog);
}
