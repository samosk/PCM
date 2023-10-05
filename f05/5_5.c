#include <stdio.h>

int read_number(void){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	return n;
}

int main(void)
{
	int n;
	n = read_number();
	printf("You entered the number %d", n);
	return 0;
}