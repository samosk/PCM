#include <stdio.h>

int add(int a, int b) { //adds two numbers together
	return a + b;
}

int sum(int n, int numbers[]) { //loops over the numbers and sums them up, returns them to be used in main
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s = add(s, numbers[i]);
	}
	return s;
	
}

int main(void) {
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i + 1;
	}
	printf("The sum of the numbers 1 through 5 is: %d\n", sum(5, arr));
	return 0;
	
}