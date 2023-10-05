#include <stdio.h>

int read_number(void){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	return n;
}

int max(int a, int b){
	if (a > b)
	{
		return a;
	} else {
		return b;
	}
	
}

int max3(int a, int b, int c){
	return max(a, max(b, c));
}

int main(void){
	int a, b, c;
	
	a = read_number();

	b = read_number();


	int maximum = max(a, b);
	printf("The largest number was %d\n", maximum);

	a = read_number();

	b = read_number();

	c = read_number();

	int largest = max3(a, b, c);
	printf("The largest number was %d\n", largest);
	return 0;
}