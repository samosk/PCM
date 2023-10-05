#include <stdio.h>

double pyramid_volume(double base, double height){
	double volume;
	volume = (base * height)/3;
	return volume;
}

int main(void){
	double base;
	double height;
	double vol;
	printf("How big is the base of the pyramid in square meters? ");
	scanf("\n%lf", &base);
	printf("How tall is the pyramid? ");
	scanf("\n%lf", &height);
	vol = pyramid_volume(base, height);
	printf("%lf\n", vol);
	printf("Normal exit\n");
	return 0;
}