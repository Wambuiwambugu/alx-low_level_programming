#include <stdio.h>

/**
 * main- entry point
 *
 * DEscription: print alphabet, exclude q, e
 *
 * Return: (0)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
