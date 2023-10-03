#include <stdio.h>
int main(void)
{
	int n1 = 1;
	int n2 = -2;
	int n3 = 1;
	for (int i = 0; i <= n3; i++)
	{
		for (int j = 0; j > n2; j--)
		{
			n1 *= 2;
		}
	}
	printf("n1 = %d\n", n1);
	return 0;
}