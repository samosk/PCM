#include <stdio.h>
#define SIZE 5
int main(void) {
	int t1[SIZE] = {1, 2, 3, 4, 5};
	int t2[SIZE] = {6, 7, 8, 9, 10};
	int res[SIZE];
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		res[i] = t1[i] * t2[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + res[i];
	}
	printf("The scalar product of t1 and t1 is: %d\n", sum);
	for (int i = 0; i < SIZE; i++)
	{
		printf("res[%d] = %d\n", i, res[i]);
	}
	
	
	printf("Normal exit");
	return 0;
	
}