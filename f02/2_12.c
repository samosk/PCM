// läs in ett heltal
// om jänmt delbart med 4, skottår
// om skottår delbart med 100, inte skottår
// om skåttår delbart med 400, skottår
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int input;
	bool output;
	printf("Input a year\n");
	scanf("%d", &input);
	if ((input % 4) == 0) //if the remainder of input divided by four is 0, if input if divisible by four with zero remainder
	{
		// printf("Leap year\n");
		output = true;
		if ((input % 100) == 0) //if the input is divisible by 100, not a leap year
		{
			// printf("Not a leap year\n");
			output = false;
			if ((input % 400) == 0) //if the input is divisible by 400, input is a leap year
			{
				// printf("Leap year\n");
				output = true;
			}
			
		}
		
	}
	if (output == true)
	{
		printf("The year %d is a leap year\n", input);
	} else {
		printf("The year %d is not a leap year\n", input);
	}
	
	printf("Normal exit");
	return 0;
}