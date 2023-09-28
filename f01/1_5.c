#include <stdio.h>
int main(void)
{
double total_sausage_weight;
double weight_per_sausage=0.1;
double max_no_guests;
printf("What is the total weight of your sausages, in kilograms? ");
scanf("%lf", &total_sausage_weight);
max_no_guests = (total_sausage_weight - 5 * weight_per_sausage) / (2 * weight_per_sausage);
printf("The maximum number of guests you can invite is: %lf.\n", max_no_guests);
printf("Normal exit.\n");
return 0;
}

// changed %d to %lf, solved all issues