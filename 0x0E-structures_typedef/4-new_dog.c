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
char *nname, *nowner;
unsigned int i, lname = 0, lowner = 0;
dog_t *ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
return (NULL);
while (name[lname])
lname++;
while (owner[lowner])
lowner++;
nname = malloc(sizeof(char) * (lname + 1));
if (nname == NULL)
{
free(ndog);
return (NULL);
}
nowner = malloc(sizeof(char) * (lowner + 1));
if (nowner == NULL)
{
free(nname);
free(ndog);
return (NULL);
}
for (i = 0; i <= lname; i++)
nname[i] = name[i];
for (i = 0; i <= lowner; i++)
nowner[i] = owner[i];
ndog->name = name;
ndog->age = age;
ndog->owner = owner;
return (ndog);
}
