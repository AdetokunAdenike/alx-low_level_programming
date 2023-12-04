#include "dog.h"

/**
 * init_dog - Initializes a struct dog.
 * @d: A pointer to be initialized.
 * @name: pointer representing the dog's name.
 * @age: The dog's age.
 * @owner: A pointer representing the dog's owner.
 * Return: Returns nothing.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
