#include <stdio.h>

typedef struct {
	int year;
	int month;
	int day;
} date;

date getDate(void) {
	date d;
	scanf("%02d", &d.year);
	scanf("%02d", &d.month);
	scanf("%02d", &d.day);
	return d;
}

void printDate(date d){
	printf("%02d", d.year);
	printf("%02d", d.month);
	printf("%02d", d.day);
}

int main(void) {
	date today;
	today = getDate();
	printDate(today);
	return 0;
}