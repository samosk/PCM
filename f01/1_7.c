#include <stdio.h>
int main(void)
{
double total_sausage_weight;
double weight_per_sausage=0.1;
double max_no_guests;
printf("What is the total weight of your sausages, in kilograms? ");
scanf("%lf", &total_sausage_weight);
max_no_guests = (total_sausage_weight - 5 * weight_per_sausage) / (2 * weight_per_sausage);
printf("The maximum number of guests you can invite is: %5.2f.\n", max_no_guests);
printf("Normal exit.\n");
return 0;
}
// can pass a simple float
// in; 5, out; 22.50 at %5.2f
// in; 1200, out; 5997.50 at %5.2f
// in; 5000, out; 24997.50 at %20.2f