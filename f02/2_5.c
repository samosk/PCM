#include <stdio.h>
int main(void)
{
	int weight;
	printf("How much does your luggage weigh?\n");
	scanf("%d", &weight);
	if (weight > 23) //if 23 is entered, the weight limit is not exceeded, therefore goes to else
	{
		printf("Your luggage is overweight!");
	} else {
		printf("Your luggage is within weight limits\n");
		printf("Normal exit\n");
		return 0;
	}
	
}