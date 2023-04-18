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
unsigned int i, lname = 0, lowner = 0;
dog_t *ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
return (NULL);
while (name[lname])
lname++;
while (owner[lowner])
lowner++;
ndog->name = malloc(sizeof(char) * (lname + 1));
if (ndog->name == NULL)
{
free(ndog);
return (NULL);
}
ndog->owner = malloc(sizeof(char) * (lowner + 1));
if (ndog->owner == NULL)
{
free(ndog->name);
free(ndog);
return (NULL);
}
for (i = 0; i <= lname; i++)
ndog->name[i] = name[i];
for (i = 0; i <= lowner; i++)
ndog->owner[i] = owner[i];
ndog->age = age;
return (ndog);
}
