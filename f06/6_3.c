#include <stdio.h>
#define SIZE 10
int main(void) {
	for (int i = 0; i < SIZE; i++)
	{
		printf("The element at index %d in the array contains the value %d\n", i, (i + 5));
	}
	printf("Normal exit\n");
	return 0;
	
}