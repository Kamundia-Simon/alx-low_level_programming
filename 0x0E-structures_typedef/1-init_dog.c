#include "dog.h"
#include <stdlib.h>

/**
  *init_dog - initialize a variable of type struct dog
  *@d: dog
  *@name: name of dog
  *@age: age of dog
  *@owner: owner of dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
