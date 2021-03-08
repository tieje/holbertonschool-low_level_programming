#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include "holberton.h"

/**
* _strcpy - copies src string to dest
* @dest: copy
* @src: original
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int src_len;

	for (/**
* _strcpy - copies src string to dest
* @dest: copy
* @src: original
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	for (x = 0; x <= len(src); x++)
		dest[x] = src[x];
	return (dest);
}/**
* _strcpy - copies src string to dest
* @dest: copy
* @src: original
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	for (x = 0; x <= len(src); x++)
		dest[x] = src[x];
	return (dest);
})
	for (x = 0; x <= len(src); x++)
		dest[x] = src[x];
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t type return
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *somedog;
	char *copyname;
	char *copyowner;
	int name_len;
	int owner_len;

	somedog = malloc(sizeof(dog_t));
	if (somedog == NULL)
		return (NULL);
	somedog->age = age;
	for (name_len = 0; name[name_len]; name_len++)
	{ continue; }
	for (owner_len = 0; owner[owner_len]; owner_len++)
	{ continue; }
	if (name)
	{
		copyname = malloc(name_len * sizeof(char));
		somedog->name = _strcpy(copyname, name);
	}
	if (owner)
	{
		copyowner = malloc(name_len * sizeof(char));
		somedog->owner = _strcpy(copyowner, owner);
	}
	return (somedog);
}
