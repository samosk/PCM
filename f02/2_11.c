/*Programmeringsteknik med C och Matlab HT15 Example File:plus_one_bad.c
Author:Jonny Pettersson User:jonny Date:2015-10-01 Description: An example
of hard-to-read code.A simple program to show input, output, variables and
assignment to variables.Input:An integer.Output: The next higher integer
value to the input value.Limitation:No validation of input.*/
#include <stdio.h>
int main(void) 
{
	int nisse;/* Read an integer from the user */

	printf("Enter an integer > ");

	scanf("%d", &nisse);/* Add 1 to the number */

	nisse = nisse + 1;/* Output the new number */

	printf("The next higher number to the input number is %d\n", nisse);
	
	return 0;
}