#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function to initialize d
 * @d: variable
 * @name: name ofdog
 * @age: how old dog is
 * @owner: who getr the dog
 * Return : d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
