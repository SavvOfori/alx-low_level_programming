#include <stdio.h>

/**
 * main - is the main function
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i;
	char k;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + 0);
	for (k = 'a' ; k <= 'f' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
