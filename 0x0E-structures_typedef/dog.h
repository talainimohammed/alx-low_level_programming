#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - a new data
 * dog Presentation
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_HEADER*/
