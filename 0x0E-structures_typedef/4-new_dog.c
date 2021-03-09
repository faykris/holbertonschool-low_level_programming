#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: char pointer
 * @age: float value
 * @owner: char pointer
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char* namcpy, owncpy;
	dog_t *newdog; 

	namcpy = strdup(name);
	if (namcpy == NULL)
	{
		return (NULL);
	}
	owncpy = strdup(owner);
	if (owncpy == NULL)
	{
		free(namcpy);
		return (NULL);
	}
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(namcpy);
		free(owncpy);
		return (NULL);
	}
	newdog->name = namcpy;
	newdog->age = age;
	newdog->owner = owncpy;
	return (newdog);
}
