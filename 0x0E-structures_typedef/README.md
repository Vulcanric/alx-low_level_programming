## 0x0E. C - Structures, typedef
### Learning Objectives
- What are structures, when, why and how to use them
- How to use typedef
### Tasks
#### 0. Poppy
Created a new type `struct dog` with the following elements:
- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`
- File: `dog.h`
#### 1. A dog is the only thing on earth that loves you more than you love yourself
Function that initialize a variable of type `struct dog`
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
- File: `1-init_dog.c`
#### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
This function prints a struct dog
- Prototype: `void print_dog(struct dog *d);`
- Same formats as the above elements.
- If an element of `d` is `NULL`, prints `(nil)` instead of this element. (if `name` is `NULL`, prints `Name: (nil)`)
- If `d` is `NULL` prints nothing
- File: `2-print_dog.c`
#### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Defined a new type `dog_t` as a new name for the type `struct dog`
- Used typedef
- File: `dog.h`
#### 4. A door is what a dog is perpetually on the wrong side of
Function that creates a new dog.
- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- Stored a copy of `name` and `owner`
- Returns `NULL` if the function fails
-File: `4-new_dog.c`
#### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
This function frees dogs :)
- Prototype: `void free_dog(dog_t *d);`
- File: `5-free_dog.c`
