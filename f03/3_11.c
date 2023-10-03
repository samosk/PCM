#include <stdio.h>
int main(void) {
	int i = 0;
	int input;
	float sum = 0;
	float add = 0;
	printf("How many number to sum? ");
	scanf("%d", &input);
	while (i < input) {
		// satserna man vill utföra flera gånger
		// skrivs in här
		printf("Enter a floating point number: ");
		scanf("%f", &add);
		sum = sum + add;
		i++;
	}
	printf("The sum is %5.1f", sum);
	return 0;
}