#include <stdio.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a; //temp holds the value of a
	*a = *b; //a takes the value of b
	*b = temp; //b takes the value of temp, which was the original value of a
}

int main(void) {
	int a = 3;
	int b = 5;
	printf("Before the swap a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("After the swap a = %d, b = %d\n", a, b);
	return 0;
}