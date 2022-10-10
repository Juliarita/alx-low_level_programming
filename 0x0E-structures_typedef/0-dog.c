#include <stdio.h> 
#include "dog.h"

/**
* init_dog - function that will initializes a variable of type struct dog
* @d:
* @name: parameter name the username
* @age: parameter age the userage
* @ower: parameter owner the userowner
* return (0);
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}

}
