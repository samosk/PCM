#include <stdio.h>
int main(void)
{
	int input;
	printf("Choose a soda\n");
	printf("1: Coca Cola\n");
	printf("2: Fanta\n");
	printf("3: Sprite\n");
	printf("4: Coca Cola Light\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		printf("You got Coca Cola");
		break;
	case 2:
		printf("You got Fanta");
		break;
	case 3:
		printf("You got Sprite");
		break;
	case 4:
		printf("You got Coca Cola Light");
		break;
	default:
		printf("That is not a valid choice, try again");
		break;
	}
}