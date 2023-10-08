#include <stdio.h>
#define SIZE 5

void multyply_array(int n, int a[], int b[], int res[]) {
	for (int i = 0; i < n; i++)
	{
		res[i] = a[i] * b[i];
	}
	
}

int sum_array(int n, int a[]) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum;
}

void print_array(int n, int res[]) {
	
	for (int i = 0; i < n; i++)
	{
		printf("res[%d] = %d\n", i, res[i]);
	}
	
}

int main(void) {
	int t1[SIZE] = {1, 2, 3, 4, 5};
	int t2[SIZE] = {6, 7, 8, 9, 10};
	int res[SIZE];
	int sum = 0;
	multyply_array(SIZE, t1, t2, res);
	sum = sum_array(SIZE, res);
	printf("The sum is %d\n", sum);
	print_array(SIZE, res);
	
	
	printf("Normal exit");
	return 0;
	
}