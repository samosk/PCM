#include <stdio.h>

typedef struct {
	int year;
	int month;
	int day;
} date;

void printDate(date d){
	printf("%02d", d.year);
	printf("%02d", d.month);
	printf("%02d", d.day);
}

int main(void) {
	date today = {12, 9, 3};
	printDate(today);
	return 0;
}