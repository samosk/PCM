#include <stdio.h>
#define SIZE 5

int main(void) {
	double largest = 0;
	double arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter the value for the array element with index %d: ", i);
		scanf("%lf", &arr[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[0] < arr[i]) {
			largest = arr[i];
		}
		
	}
	printf("The largest element in the array is %.2lf\n", largest);
	
	
	
	
	
	printf("Normal exit\n");
	return 0;
	
}