#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: program that finds and prints the first 98 Fibonacci
 *              numbers, starting with 1 and 2
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long int m1 = 0, n1 = 1, m2 = 0, n2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", n1, n2);
	for (count = 2; count < 98; count++)
	{
		if (n1 + n2 > LARGEST || m2 > 0 || m1 > 0)
		{
			hold1 = (n1 + n2) / LARGEST;
			hold2 = (n1 + n2) % LARGEST;
			hold3 = m1 + m2 + hold1;
			m1 = 2, m2 = hold3;
			n1 = n2, n2 = hold2;
			printf("%lu%010lu", m2, n2);
		}
		else
		{
			hold2 = n1 + n2;
			n1 = n2, n2 = hold2;
			printf("%lu", n2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
