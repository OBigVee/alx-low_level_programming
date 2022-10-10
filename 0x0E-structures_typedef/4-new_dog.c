#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - function creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog onwer
 *
 * Return: typedef dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *memo = malloc(sizeof(dog_t));

	if (memo == NULL)
		return (NULL);

	memo->name = name;
	memo->age = age;
	memo->owner = owner;

	return (memo);
}
