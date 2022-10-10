#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog, or null if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cute_dog;

	char *copy_name, *copy_owner;
	unsigned int name_len, owner_len;

	name_len = strlen(name);
	owner_len = strlen(owner);

	cute_dog = malloc(sizeof(dog_t));

	if (cute_dog == NULL)
		return (NULL);

	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(cute_dog);
		return (NULL);
	}

	copy_name = malloc(sizeof(char) * (name_len + 1));
	if (copy_name == NULL)
		return (NULL);

	copy_owner = malloc(sizeof(char) * (owner_len + 1));
	if (copy_owner == NULL)
		return (NULL);

	strcpy(copy_name, name);
	strcpy(copy_owner, owner);

	cute_dog->name = name;
	cute_dog->age = age;
	cute_dog->owner = owner;

	return (cute_dog);
}
