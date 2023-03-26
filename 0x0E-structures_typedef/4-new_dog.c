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




/** _strcpy - set string value to another string
 * *s1: string to copy
 *
 * Return: copy of the string
 */
char *_strcpy(char *s1, char *s2)
{
	int i = 0;

	for (; *(s1 + i) != '\0'; i++)
	{
		*(s2 + i) = *(s1 + i);
	}
	return (s2);
}





/**
 * free_fail - free the allocated space if malloc fails
 * @s: space to free
 *
 * Return: s if success, else NULL
 */
char *free_fail(char *s)
{
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	return (s);
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
	char *cp_name;
	char *cp_owner;

	d = malloc(sizeof(*d));

	if (d == NULL || name == NULL || owner == NULL)
	{
		free(d);
		return (NULL);
	}

	cp_name = malloc(_strlen(name) + 1);
	free_fail(cp_name);
	cp_name = _strcpy(name, cp_name);

	cp_owner = malloc(_strlen(owner) + 1);
	free_fail(cp_owner);
	cp_owner = _strcpy(owner, cp_owner);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
