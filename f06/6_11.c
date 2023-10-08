#include <stdio.h>

void create_array(int n, double a[]) {
	for (int i = 0; i < n; i++)
	{
		printf("Enter the value for the array element with index %d: ", i);
		scanf("%lf", &a[i]);
	}
	printf("\n");
}

double get_max_of_array(int n, double a[]) {
	double largest;
	for (int i = 0; i < n; i++)
	{
		if (a[0] < a[i]) {
			largest = a[i];
		}
		
	}
	return largest;
}

int main(void) {
	const int n = 5;
	double a[n];
	create_array(n, a);
	double largest = get_max_of_array(n, a);
	
	
	
	printf("The largest element in the array is %.2lf\n", largest);
	printf("Normal exit\n");
	return 0;
	
}