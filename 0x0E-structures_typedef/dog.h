#ifndef DOG_H_
#define DOG_H_
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
/**
 *dog_t - initializes type struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H_ */
