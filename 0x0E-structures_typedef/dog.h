#ifndef DOG
#define DOG
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

typedef struct dog dog_t;
/* function that initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* function that prints a struct dog */
void print_dog(struct dog *d);

/* function that creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);