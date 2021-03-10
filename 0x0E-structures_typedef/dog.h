#ifndef DOG
#define DOG

/**
 * struct dog - data structure information
 * @name: char pointer
 * @age: float value
 * @owner: char pointer
 *
 * Return: Nothing
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* data structure synonym */
typedef struct dog dog_t;

/* function that initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* function that prints a struct dog */
void print_dog(struct dog *d);

/* function that creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);

/* fuction that free dogs*/
void free_dog(dog_t *d);

#endif
