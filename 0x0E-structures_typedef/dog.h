#ifndef DOG_H
#define DOG_H

/*
 * struct dog - for storing information about dog.
 * @name: A pointer representing the dog's name.
 * @age: A float representing the dog's age.
 * @owner: A pointer representing the dog's owner.
 * Return: returns zero.
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
