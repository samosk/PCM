#include <stdio.h>

int main(void) {
	const int size = 10;
	int arr[size];
	arr[0] = 5;
	arr[1] = 3;
	arr[2] = 9;
	arr[3] = 0;
	arr[4] = 1;
	arr[5] = 8;
	arr[6] = 7;
	arr[7] = 6;
	arr[8] = 2;
	arr[9] = 4;
	for (int i = 0; i < size; i++)
	{
		printf("The element at index %d in the array contains the value %d\n", i, arr[i]);
	}
	printf("Normal exit\n");
	return 0;
	
}