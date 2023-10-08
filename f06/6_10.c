#include <stdio.h>

void enter_values(int n, int a[]) {

	for (int i = 0; i < n; i++)
	{
		printf("Enter the value for the array element with index %d: ", i);
		scanf("%d", &a[i]);
	}
	printf("\n");
}

void print_values(int n, int a[]) {
	
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n", i, a[i]);
	}
	printf("\n");
}

void print_reverse(int n, int a[]) {

	for (int i = n - 1; i >= 0; i--)
	{
		printf("arr[%d] = %d\n", i, a[i]);
	}
}


int main(void) {
	const int n = 5;
	int a[n];
	enter_values(n, a);
	print_values(n, a);
	print_reverse(n, a);
	printf("Normal exit\n");
	return 0;
	
}