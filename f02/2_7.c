#include <stdio.h>
int main(void){
	int n1;
	int n2;
	printf("Enter an integer number: \n");
	scanf("%d", &n1);
	printf("Enter another integer number: \n");
	scanf("%d", &n2);

	if (n1 > n2)
	{
		printf("The number %d is greater than %d\n", n1, n2);
	} else if (n1 < n2)
	{
		printf("The number %d is greater than %d\n", n2, n1);
	} else if (n1 == n2){
		printf("The number %d is equal to %d\n", n1, n2);
	}
	printf("Normal exit\n");
	return 0;
	
}
