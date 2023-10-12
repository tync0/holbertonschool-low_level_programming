#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = strlen(a);
	for (int j = 0; j < i; j++)
        	putchar(a[j]);
	return (1);
}
