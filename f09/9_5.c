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
	printf("\nEnter the year: ");
	scanf("%02d", &d.year);
	printf("\nEnter the month: ");
	scanf("%02d", &d.month);
	printf("\nEnter the day: ");
	scanf("%02d", &d.day);
	return d;
}

courseInfo getInfo(void) {
	courseInfo I;
	printf("\nEnter the information about the start date");
	I.startDate = getDate();
	printf("\nEnter the information about the end date");
	I.endDate = getDate();
	printf("\nEnter the average grade for this course: ");
	scanf("%lf", &I.avgGrade);
	printf("\nEnter the number of students/alumni in this course: ");
	scanf("%d", &I.students);
	return I;
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
	printf("%lf", I.avgGrade);
	printf("\n");
	printf("%d", I.students);
}

int main(void) {
	courseInfo s;
	s = getInfo();
	printInfo(s);
	return 0;
}