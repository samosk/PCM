#include <stdio.h>



void swap(int *a, int *b) {
	int temp;
	temp = *a; //temp holds the value of a
	*a = *b; //a takes the value of b
	*b = temp; //b takes the value of temp, which was the original value of a
}

void sort(int *a, int *b) {
	if (*a > *b) {
		swap(a, b);
	}
}

int main(void) {
	int a = 3;
	int b = 5;
	printf("Before the sort a = %d, b = %d\n", a, b);
	sort(&a, &b);
	printf("After the sort a = %d, b = %d\n", a, b);
	return 0;
}