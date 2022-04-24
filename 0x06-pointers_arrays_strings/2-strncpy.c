#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: frst string
 * @src: second string
 * @n: number of bytes to use from src
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (n > b)
	{
		if (src[b] == '\0')
		{
			for (; b < n; b++)
			{
				dest[a] = '\0';
				a++;
			}
		}
		else
		{
			dest[a] = src[b];
			b++;
			a++;
		}
	}
	return (dest);
}
