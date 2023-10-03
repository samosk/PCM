#include <stdio.h>
int main(void)
{
	int inputO;
	int input = 0;
	scanf("%d", &input);
	scanf("%d", &inputO);
	for (int i = input; i < inputO; i++)
	{
		printf("%d\n", i);
	}
	return 0;
	
}