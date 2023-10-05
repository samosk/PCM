#include <stdio.h>

double f_read_number(void){
	double n;
	printf("Enter a number: ");
	scanf("%lf", &n);
	return n;
}

int main(void)
{
	double n1, n2;

	n1 = f_read_number();
	n2 = f_read_number();

	printf("The sum of n1 and n2 is: %lf\n", n1 + n2);
	printf("The difference between n1 and n2 is: %lf\n", n1 - n2);
	printf("The product of n1 and n2 is: %lf\n", n1 * n2);
	printf("The quotient between n1 and n2 is: %lf\n", n1 / n2);

	printf("Normal exit\n");
	return 0;
}