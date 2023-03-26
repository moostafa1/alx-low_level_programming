#include "dog.h"



/**
 * _strlen - gets length of the string
 * @s: string to get its length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}




/**
 * _strcpy - set string value to another string
 * @s1: string to copy
 * @s2: string to copy in
 *
 * Return: void
 */
void _strcpy(char *s1, char *s2)
{
	int i = 0;

	for (; i < _strlen(s1); i++)
	{
		*(s2 + i) = *(s1 + i);
	}
}





/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));

	if (d == NULL || name == NULL || owner == NULL)
	{
		free(d);
		return (NULL);
	}


	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	 _strcpy(name, d->name);
	d->age = age;
	_strcpy(owner, d->owner);

	return (d);
}
