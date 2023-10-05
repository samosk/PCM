#include <stdio.h>
float f_add(float a, float b)
{
	float sum;
	sum = a + b;
	return sum;
}

int main(void)
{
	float n1 = 1.5;
	float n2 = 4.1;
	float result;
	result = f_add(n1, n2);
	printf("The sum is %lf", result);
	return 0;
}