#include "main.h"

/**
 * more_numbers - prints 0 to 14, 10 times
 *
 * Return: always (0)
 */
void more_numbers(void)
{
	int l;
	int i;
	
	for (l = 0; l <= 10; l++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
