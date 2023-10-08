#include <stdio.h>
int main(void) {
	const int size = 5;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		printf("Enter the value for the array element with index %d: ", i);
		scanf("%d", &arr[i]);
	}
	printf("\n");
	printf("Values in ascending order: \n");
	for (int i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("\n");

	for (int i = size - 1; i >= 0; i--)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	
	
	printf("Normal exit\n");
	return 0;
	
}