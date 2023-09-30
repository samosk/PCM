#include <stdio.h>
int main(void)
{
	int weight;
	printf("How much does your luggage weigh?\n");
	scanf("%d", &weight);
	// if (weight > 23)
	// {
	// 	printf("Your luggage is overweight!");
	// } else if (weight < 23){
	// 	printf("Your luggage is within weight limits\n");
	// } else {
	// 	printf("Your luggage is at the weight limit\n");
	// 	printf("Normal exit\n");
	// 	return 0;
	// }
	if (weight > 23)
	{
		printf("Your luggage is overweight!\n");
	}
	if (weight < 23)
	{
		printf("Your luggage is within weight limits\n");
	}
	if (weight == 23)
	{
		printf("Your luggage is at the weight limit\n");
	}
	printf("Normal exit\n");
	return 0;
	
	
	
	
}