//Samuel Oskarsson, id23son
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int choice;
	bool repeat = true; //set to true so that the loop gets entered
	float rate = 1; //the exchange rate
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
		case 1: //set exchange rate
			printf("\nEnter exchange rate: ");
			scanf("%f", &rate);
			repeat = true;
			break;

		case 2: //read foreign currency and transform into SEK
			printf("\n");
			while (price >= 0) //as long as the price is not negative, continue to ask for more prices
			{
				printf("Enter price (finish with < 0): ");
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
			price = 1;
			sum = 0;
			sumSEK = 0;
			repeat = true;
			break;

		case 3: //end the program
			printf("\nEnd of program!\n\n");
			repeat = false;
			break;

		default: //if choice is other than 1-3
			printf("\nNot a valid choice!\n");
			repeat = true;
			break;

		}
	}
	return 0;
}