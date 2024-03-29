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

/* Creating alias for "struct dog" */

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* Prototypes of functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/* Other helpful prototypes */
char *_strcpy(char *des, char *src);
unsigned int _strlen(char *s);
#endif
