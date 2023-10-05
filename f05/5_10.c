#include <stdio.h>

double average3(int a, int b, int c){
	double average;
	average = (a + b + c)/3;
	return average;
}

int main(void){
	int a, b, c;
	printf("Give three whole numbers and get the average: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	double z;
	z = average3(a, b, c);
	printf("The average of the three numbers is: %lf\n", z);
	printf("Normal exit");
	return 0;
}