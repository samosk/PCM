#include <stdio.h>
void fill_array(int n, int a[]) {
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 5;
	}
}

void print_array(int n, int a[]) {
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n", i, a[i]);
	}
	
}

int main(void) {
	int arr[] = {0};
	fill_array(10, arr);
	print_array(10, arr);
	printf("Normal exit\n");
	return 0;
	
}