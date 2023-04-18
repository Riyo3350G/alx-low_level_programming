#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct representing a dog with a name, age, and owner.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: A struct representing a dog with a name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
