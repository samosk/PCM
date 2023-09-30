#include <stdio.h>
int main(void)
{
	int number;
	printf("Give a number: ");
	scanf("%d", &number);
	if (number % 2 == 0){
		printf("Even!\n");
	} else {
		printf("Odd !!\n");
	}
	printf("Normal exit.\n");
	return 0;
}

// Programmet läser in ett heltal från användaren och skriver ut om det är jämnt delbart med 2 eller inte