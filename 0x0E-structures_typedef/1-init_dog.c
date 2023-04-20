#include "dog.h"
/**
 * init_dog- deferences struct
 * @d: dog to be deferenced
 * @name: param 1
 * @age: param 2
 * owner: param 3
 * return:void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name=name;
		d->age=age;
		d->owner=owner;
	}
}
