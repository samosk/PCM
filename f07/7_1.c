#include <stdio.h>
#define SIZE 5

int main(void) {

	double arr[SIZE];
	double largest;
	double smallest;
	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter the value for the array element with index %d: ", i);
		scanf("%lf", &arr[i]);
	}
	largest = arr[0];
	smallest = arr[0];
	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		if (largest < arr[i]) {
			largest = arr[i];
		}
		if (arr[i] < smallest)
		{
			smallest = arr[i];
		}
		
		
	}
	
	
	printf("The largest element in the array is %.2lf\n", largest);
	printf("The smallest element in the array is: %.2lf\n", smallest);
	
	
	
	
	
	printf("Normal exit\n");
	return 0;
	
}