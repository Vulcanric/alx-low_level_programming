#ifndef DOG_H
#define DOG_H

/**
 * struct dog - User-defined type
 * @name: element1
 * @age: element2
 * @owner: element3
 *
 * Description: New user-defined type having three members.
 * All relating to a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototypes of other functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
