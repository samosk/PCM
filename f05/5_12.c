#include <stdio.h>

void print_text(void)
{
	printf("\nThis program will read three numbers, ");
	printf("compute the sum of the first two numbers,\n");
	printf("the sum of all three numbers, and output ");
	printf("the results.\n\n");
}

double read_number(void)
{
	double number;
	printf("Enter a number: ");
	scanf("%lf", &number);
	return number;
}

double sum(double n1, double n2)
{
	return n1 + n2;
}

int main(void)
{
	double n1, n2, n3;
	double sum2, sum3;
	print_text();
	n1 = read_number();
	n2 = read_number();
	n3 = read_number();
	sum2 = sum(n1, n2);
	sum3 = sum(sum(n1, n2), n3);
	printf("%f + %f = %f\n", n1, n2, sum2);
	printf("%f + %f + %f = %f\n", n1, n2, n3, sum3);
	
	printf("\nNormal exit\n");
	return 0;
}