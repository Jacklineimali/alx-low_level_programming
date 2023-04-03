#include "main.h"
#include <stdlib.h>
/**
 * _strstr - locates substring
 * @haystack: string in which to check
 * @needle: first substring occurrence to check
 * Return: a pointer to the beggining of the located substring
 * @needle. Return NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (NULL);
}
