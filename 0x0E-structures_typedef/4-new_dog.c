#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_cpy - store the copy of values
 * @str: string pointer
¨* @len: int value
 * Return: char value
*/
char *str_cpy(char *str, int len)
{
	char *new_str;
	int i = 0;

	new_str = malloc(len);
	if (new_str == 0)
	{
		return (0);
	}

	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}

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
	int i = 0, j = 0;
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));
	if (newdog != 0 && name != 0 && owner != 0)
	{
		while (name[i])
		{
			i++;
		}
		while (owner[j])

		{
			j++;
		}
		newdog->name = str_cpy(name, i + 1);
		if (newdog->name == 0)
		{
			free(newdog);
			return (0);
		}
		newdog->age = age;
		newdog->owner = str_cpy(owner, j + 1);
		if (newdog->owner == 0)
		{
			free(newdog->name);
			free(newdog);
			return (0);
		}
		return (newdog);
	}
	return (0);

}
