#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The structure of the function
 * @name: First parameter
 * @age: Second parameter
 * @owner: Third parameter
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
