#include "dog.h"
#include <stdio.h>

/**
 * print_dog - to print astruct dog
 * @d: the dog to struct
 * Return: void
 **/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name:%s\n", d->name ? d->name : "(nil)");
		printf("Age:%f\n", d->age);
		printf("Owner:%s\n", d->owner ? d->owner : "(nil)");
	}
}

