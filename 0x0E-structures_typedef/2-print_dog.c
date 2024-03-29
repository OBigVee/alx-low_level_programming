#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct name
 *
 * Return : 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				(*d).name != NULL ? d->name : "(nil)",
				(*d).age,
				(*d).owner != NULL ? d->owner : "(nil)"
		      );
	}
}
