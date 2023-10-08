#include <stdio.h>
#define SIZE 10
int main(void) {
	int num[SIZE] = {0};
	int input;
	do
	{
		printf("Enter an integer (0-9): ");
		scanf("%d", &input);
		if (input >= 0 && input < SIZE)
		{
			num[input]++;
		}
		
	} while (input >= 0 && input < SIZE);
	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("The number %d was entered %d time(s)\n", i, num[i]);
	}
	
	
	
	printf("Normal exit");
	return 0;


	
}