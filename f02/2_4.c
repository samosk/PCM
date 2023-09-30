#include <stdio.h>
int main(void)
{
	int weight;
	printf("How much does your luggage weigh?\n");
	scanf("%d", &weight);
	if (weight > 23)
	{
		printf("Your luggage is overweight!");
	} else {
		printf("Normal exit\n");
		return 0;
	}
	
}