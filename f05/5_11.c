#include <stdio.h>

int print_choices(void){
	return
	printf("1. Convert from F to C\n2. Convert from C to F\n");
}

int enter_selection(int sel){
	printf("Enter your selection: ");
	scanf("%d", &sel);
	return sel;
}

int valid_selection(int sel){
	if (sel < 1 || sel > 2)
	{
		return printf("Slection out of range (1-2)\n");
	} else {
		return 0;
	}
	
}

double enter_temp(int sel){
	double temperature;
	if (sel == 1) {
		printf("Enter the temperature in degrees Fahrenheit: ");
	} else {
		printf("Enter the temperature in degrees Celsius: ");
	}
	scanf("%lf", &temperature);
	return temperature;
}

int convert_temp(int sel, double temperature){
	double new_temperature;
	if (sel == 1) {
		new_temperature = (temperature - 32) / (9.0/5.0);
	} else {
		new_temperature = (9.0/5.0) * temperature + 32;
	}
	return new_temperature;
}

void print_temp(int sel, double temperature, double new_temperature){
	if (sel == 1 ) {
		printf("%.2f F is %.2f C\n", temperature, new_temperature);
	} else {
		printf("%.2f C is %.2f F\n", temperature, new_temperature);
	}
}

int main(void){
	int sel;
	double temperature;
	double new_temperature;
	do{
		print_choices();

		sel = enter_selection(sel);

		valid_selection(sel);
	} while (sel < 1 || sel > 2);

	temperature = enter_temp(sel);

	new_temperature = convert_temp(sel, temperature);

	print_temp(sel, temperature, new_temperature);

	return 0;
	
}