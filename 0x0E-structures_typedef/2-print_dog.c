#include "dog.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * print_dog - print a dog
 * @d: dog to print
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("name: %s\n", d->name ? d->name : "(nil)");
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
