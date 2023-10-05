#include <stdio.h>

int read_number(void){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	return n;
}

int main(void)
{
	int n1, n2;

	n1 = read_number();
	n2 = read_number();

	printf("The sum of n1 and n2 is: %d\n", n1 + n2);
	printf("The difference between n1 and n2 is: %d\n", n1 - n2);
	printf("The product of n1 and n2 is: %d\n", n1 * n2);
	printf("The quotient between n1 and n2 is: %d\n", n1 / n2);
	printf("The integer remainder between n1 and n2 is: %d\n", n1 % n2);

	printf("Normal exit\n");
	return 0;
}