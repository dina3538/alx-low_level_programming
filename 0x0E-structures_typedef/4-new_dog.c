#include "dog.h"
#include<stdlib.h>
#include<string.h>

/**
 * new_dog - create new dog
 * @name: name of dog
 * @owner: dog owner
 * @age: dog age
 * Return: dogy
 * NULL if function fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;

	if (!name || age < 0 || !owner)
		return (NULL);

	dogy = (dog_t *)malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);
	dogy->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dogy->name == NULL)
	{
		free(dogy);
		return (NULL);
	}
	dogy->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if ((*dogy).owner == NULL)
	{
		free(dogy->name);
		free(dogy);
		return (NULL);
	}
	dogy->name = strcpy(dogy->name, name);
	dogy->age = age;
	dogy->owner = strcpy(dogy->owner, owner);
	return (dogy);
}
