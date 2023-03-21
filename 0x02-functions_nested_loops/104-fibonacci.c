#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci
 *              numbers, starting with 1 and 2
 *
 * Return: Always 0 successful
 */
int main(void)
{
	unsigned long int m1 = 0, m2 = 1, y;
	int x;

	for (x = 1; x <= 98; x++)
	{
		y = m1 + m2;
		if (x != 98)
		{
			printf("%lu, ", y);
		}
		else
		{
			printf("%lu\n", y);
		}
		m1 = m2;
		m2 = y;
	}
	return (0);
}
