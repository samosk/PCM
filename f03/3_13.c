#include <stdio.h>
int main(void)
{
	printf("1. ");
	for (int i = 1; i <= 20; i++)
	{
		printf(" %d", i);
	}
	printf("\n2. ");
	for (int i = 1; i <= 31; i = i + 2)
	{
		printf(" %d", i);
	}
	printf("\n3. ");
	for (int i = 30; i >= 0; i = i - 2)
	{
		printf(" %d", i);
	}
	printf("\n4. ");
	for (float i = 2; i <= 9.5; i = i + 0.5)
	{
		printf(" %3.1f", i);
	}
}