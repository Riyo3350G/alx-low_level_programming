#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a pointer to the new dog 
 * or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *new_name, *new_owner;

    /* memory for new dog */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* memory for new name and copy contents of name into it */
    new_name = malloc(sizeof(char) * (strlen(name) + 1));
    if (new_name == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    strcpy(new_name, name);

    /* memory for new owner and copy contents of owner into it */
    new_owner = malloc(sizeof(char) * (strlen(owner) + 1));
    if (new_owner == NULL)
    {
        free(new_name);
        free(new_dog);
        return (NULL);
    }
    strcpy(new_owner, owner);

    /* set new dog */
    new_dog->name = new_name;
    new_dog->age = age;
    new_dog->owner = new_owner;

    return (new_dog);
}

