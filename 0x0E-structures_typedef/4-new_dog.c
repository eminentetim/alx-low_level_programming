#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  creates a new dog.
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: Pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int length1 = 0, length2 = 0, i = 0, j = 0;

	newDog = malloc(sizeof(struct dog));

	if (newDog == NULL)
		return (NULL);
	while (name[length1++])
		;
	while (owner[length2++])
		;
	newDog->name = malloc(sizeof(newDog->name) * length1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	while (i < length1)
	{
		newDog->name[i] = name[i];
		i++;
	}

	newDog->age = age;


	newDog->owner = malloc(sizeof(newDog->owner) * length2);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	while (j < length2)
	{
		newDog->owner[j] = owner[j];
		j++;
	}
	return (newDog);
}
