#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string with first occurrence of any of the bytes
 * @accept: string with bytes to seach for
 * Return: a pointer to the byte in @s that matches one of the bytes in
 * @accept. Return NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return (NULL);
}
