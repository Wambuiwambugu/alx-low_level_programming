#include "main.h"

/**
 * *_strchr - function to locate fisr occurrance of char c in string c
 * @s: string
 * @c: character to be located
 *
 * Return: first coccurrance of c or NULl
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			break;
	return (s[i] == c ? (s + i) : '\0');
}
