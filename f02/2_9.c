#include <stdio.h>

int main(void)
{
	int age;
	age = 17;
	if (age > 20){
		printf("My age is greater than 20 years");
		printf("greater than 20 years\n");
	} else {
		printf("My age is ");
		printf("less than or equal to 20 years\n");
	}
	printf("Normal exit.\n");
	return 0;
}

//added {} to the if and else statements