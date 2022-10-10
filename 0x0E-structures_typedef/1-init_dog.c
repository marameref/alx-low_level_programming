#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to a dog structure
 * @name: the name to set
 * @age: age to set
 * @owner: owner to set
 *
 * Return: Nothing after setting
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* I verifie if @d is not null */
	if (!d)
		return;
	/*since d is not NULL i initialize */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
