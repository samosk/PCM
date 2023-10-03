#include <stdio.h>
int main(void)
{
	int sum = 0;
	int input;
	scanf("%d", &input);
	for (int i = 0; i <= input; i++)
	{
		sum = sum + i;
		printf("%d\n", sum);
	}
	
}