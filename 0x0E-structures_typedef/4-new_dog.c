#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
        int a;

        a = 0;

        while (s[a] != '\0')
        {
                a++;
        }

        return (a);
}

/**
 * *_strcpy - Copies the string pointed to src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: Pointer to the buffer in which we copy the string
 * @src: String to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
        int length, a;

        length = 0;

        while (src[length] != '\0')
        {
                length++;
        }

        for (a = 0; a < length; a++)
        {
                dest[a] = src[a];
        }
        dest[a] = '\0';

        return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *p;
        int length1, length2;

        length1 = _strlen(name);
        length2 = _strlen(owner);

        p = malloc(sizeof(dog_t));
        if (p == NULL)
                return (NULL);

        p->name = malloc(sizeof(char) * (length1 + 1));
        if (p->name == NULL)
        {
                free(p);
                return (NULL);
        }
        p->owner = malloc(sizeof(char) * (length2 + 1));
        if (dog->owner == NULL)
        {
                free(p);
                free(p->name);
                return (NULL);
        }
        _strcpy(p->name, name);
        _strcpy(p->owner, owner);
        p->age = age;

        return (p);
}
