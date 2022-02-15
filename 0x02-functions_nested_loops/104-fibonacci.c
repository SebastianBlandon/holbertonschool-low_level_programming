#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - the function print fibonacci 50
 * Return: void function
 */
int main(void)
{
	int i;
	unsigned long a = 0, b = 1, save1, save2, sum = 0;
	unsigned long tmp1, tmp2, tmp3;

	for (i = 0; i < 97; i++)
	{
		if (a + b > LARGEST)
		{
			tmp1 = (a + b) / LARGEST;
			tmp2 = (a + b) % LARGEST;
			tmp3 = save1 + save2 + tmp1;
			save1 = save2;
			save2 = tmp3;
			a = b;
			b = tmp2;
			printf("%lu%010lu", save2, b);
		}
		else
		{
			sum = a + b;
			a = b;
			b = sum;
			printf("%lu", sum);
		}
		if (i != 96)
			printf(", ");
	}
	printf("\n");
	return (0);
}

