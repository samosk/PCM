#include <stdio.h>
int main(void)
{
int number_1 = 0;
int number_2 = 0;

/* Read the first number */
printf("Enter the first integer > ");
scanf("%d", &number_1); //missing & sign

/* Read the second number */
printf("Enter the second integer > ");
scanf("%d", &number_2); //assigning wrong variable

/* Print whether the number are equal or what number is the smallest */
if (number_1 == number_2) { //missing ==
printf("The number are equal\n");
printf("Number 1 = %d. Number 2 = %d\n", number_1, number_2);
} else if (number_2 > number_1) { //two statement pieces are the same, both variables are the same in both statement pieces
printf("Number 1 is smaller\n");
printf("Number 1 = %d. Number 2 = %d\n", number_1, number_2);
} else
printf("Number 2 is smaller\n");
printf("Number 1 = %d. Number 2 = %d\n", number_1, number_2);

return 0;
}