#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);
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
#endif
