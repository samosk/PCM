#include <stdio.h>

typedef struct {
	int year;
	int month;
	int day;
} date;

typedef struct {
	date startDate;
	date endDate;
	double avgGrade;
	int students;
} courseInfo;

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

void printInfo(courseInfo I) {
	printDate(I.startDate);
	printf("\n");
	printDate(I.endDate);
	printf("\n");
	printf("%.2lf\n", I.avgGrade);
	printf("%d\n", I.students);
}

int main(void) {
	date start = {17,9,28};
	date end = {17,10,30};
	courseInfo s = {start, end, 21.45, 170};
	printInfo(s);
	return 0;
}