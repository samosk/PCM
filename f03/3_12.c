#include <stdio.h>
int main(void)
{
	int n;
	printf("Enter max value for n: ");
	scanf("%d", &n);
	printf("i\ti*i\ti*i*i\n");
	printf("===\t=====\t=======\n");
	for (int i = 1; i <= n; i++)
	{
		printf("%2d%9d%11d\n", i, i * i, i * i * i);
	}
	
}