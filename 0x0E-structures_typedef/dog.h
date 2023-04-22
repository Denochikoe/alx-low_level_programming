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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
