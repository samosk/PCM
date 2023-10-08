#include <stdio.h>
#define SIZE 10
int main(void) {
	int arr[SIZE] = {5,3,9,0,1,8,7,6,2,4};
	for (int i = 0; i < SIZE; i++)
	{
		printf("The element at index %d in the array contains the value %d\n", i, arr[i]);
	}
	printf("Normal exit\n");
	return 0;
	
}