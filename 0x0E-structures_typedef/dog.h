#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog description
 * @name: dog name
 * @age: dog age
 *@owner: dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);
dog_t *new_dog(char *name, float age, char *owner);
/*void free_dog(dog_t *d);*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
