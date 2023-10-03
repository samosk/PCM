#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int choice;
	bool repeat = true;
	float rate = 1;
	float price = 1;
	float sum, sumSEK; //the sum of all the prices and the prices converted to SEK
	
	printf("Your shopping assistant\n");
	
	while (repeat == true) //repeats while the user does not press "3"
	{
		printf("\n1. Set exchange rate in SEK (current rate: %.2f)\n", rate);
		printf("2. Read prices in the foreign currency\n");
		printf("3. End\n");
		printf("\nEnter your choice (1 - 3): ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\nEnter exchange rate: ");
			scanf("%f", &rate);
			repeat = true;
			break;
		case 2:
			while (price >= 0) //as long as the price is not negative, continue to ask for more prices
			{
				printf("\nEnter price (finish with < 0): ");
				scanf("%f", &price);
				if (price < 0) //if the price is below zero, jump out of the cycle of asking for prices
				{
					break;
				}
				
				sum = sum + price;
			}

			sumSEK = sum * rate;
			printf("\nSum in foreign currency: %.2f\n", sum);
			printf("Sum in SEK: %.2f\n", sumSEK);
			repeat = true;
			break;
		case 3:
			printf("\nEnd of program!\n\n");
			repeat = false; //program closes if
			break;
		default:
			printf("\nNot a valid choice!\n");
			repeat = true;
			break;
		}
	}
}