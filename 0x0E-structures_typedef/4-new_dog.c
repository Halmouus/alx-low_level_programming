#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: a struct for the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
return (NULL);
ndog->name = name;
ndog->age = age;
ndog->owner = owner;
return (ndog);
}
