#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int choice;
	bool repeat = true;
	float rate = 1;
	float price1 = 0;
	float price2 = 0;
	float price3 = 0;
	float sum, sumSEK;
	
	printf("Your shopping assistant\n");
	
	while (repeat == true)
	{
		
	
		printf("\n1. Set exchange rate in SEK (current rate: %5.2f)\n", rate);
		printf("2. Read prices in the foreign currency\n");
		printf("3. End\n");
		printf("\nEnter your choice (1 - 3): ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: //complete
			printf("\nEnter exchange rate: ");
			scanf("%f", &rate);
			repeat = true;
			break;
		case 2:
			printf("\nEnter price (finish with < 0): ");
			scanf("%f", &price1);
			printf("Enter price (finish with < 0): ");
			scanf("%f", &price2);
			printf("Enter price (finish with < 0): ");
			scanf("%f", &price3);
			if (price1 < 0)
			{
				price1 = 0;
			}
			if (price2 < 0)
			{
				price2 = 0;
			}
			if (price3 < 0)
			{
				price3 = 0;
			}
			
			sum = price1 + price2 + price3;
			sumSEK = sum * rate;
			printf("\nSum in foreign currency: %5.2f\n", sum);
			printf("Sum in SEK: %5.2f\n", sumSEK);
			repeat = true;
			break;
		case 3:
			printf("\nEnd of program!\n\n");
			repeat = false;
			break;
		default:
			printf("\nNot a valid choice!\n");
			repeat = true;
			break;
		}
	}
	
}