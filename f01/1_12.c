#include <stdio.h>
int main(void)
{
int current_meeter_indication;
int year_ago_meeter_indication;
int fuel_consumption;
int final_value;
printf("How many kilometers has your car driven?\n");
scanf("%d", &current_meeter_indication);
printf("How many kilometers did your car have driven last year?\n");
scanf("%d", &year_ago_meeter_indication);

printf("How much fuel have you used?\n");
scanf("%d", &fuel_consumption);
final_value = (current_meeter_indication - year_ago_meeter_indication) / fuel_consumption;
printf("Your avarage fuel consumption is: %d liters per kilometer\n", final_value);
printf("Normal exit.\n");
return 0;
}