#include "main.h"
/**
 * _strchr - Locates a character in a string.
 *
 * @s: A string.
 * @c: A character.
 *
 * Return: The pointer to the first occurrence of the character C.
 */
char *_strchr(char *s, char c)
{
        unsigned int f;

        for (f = 0; *(s + f) != '\0'; f++) {
                if (*(s + f) == c)
                        return (s + f);
        }
        return ('\0');
}
