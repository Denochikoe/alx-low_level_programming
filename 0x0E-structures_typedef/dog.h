#ifndef DOG_H
#define DOG_H
/**
 * Struct dog- initializes dog
 * @name: param 1
 * @age: param 2
 * @owner: param 3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
