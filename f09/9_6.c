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
	printf("Start date: ");
	printDate(I.startDate);
	printf("\n");
	printf("End date: ");
	printDate(I.endDate);
	printf("\n");
	printf("The average grade: ");
	printf("%lf", I.avgGrade);
	printf("\n");
	printf("The number of students in the course: ");
	printf("%d", I.students);
}

void printCourses(courseInfo courses[], int number) {
	
	for (int i = 0; i < number; i++)
	{
		courses[i] = getInfo();
	}
	for (int i = 0; i < number; i++)
	{
		printf("\nCourse [%d]: \n", i+1);
		printInfo(courses[i]);
	}
}

int main(void) {
	int const size = 3;
	courseInfo s[size];
	printCourses(s, size);
	return 0;
}