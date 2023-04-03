#include ""main.h
/**
 * _strstr - Locates a substring
 * @haystack: String to look though
 * @needle: Substring to find
 * Return: Pointer to string with result of search
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int length;
	/**/
	length = 0;
	while (needle[length] != '\0')
		length++;
	/**/
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, length) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
