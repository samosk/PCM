#include <stdio.h>
typedef struct
{
	int a;
	double x;
} values;
typedef struct
{
	values before;
	values after;
} change;
double f1(int n1, double n2)
{
	values v = {n1, n2};
	v.a = v.a + 5;
	v.x = v.x - 1;
	return v.a - v.x;
}
int f2(int n1, double n2)
{
	values v = {n1, n1 - n2};
	v.a = v.a + (int)v.x;
	v.x += v.a;
	return (int)v.x;
}
values f3(values current)
{
	values next;
	next.a = current.a * 2;
	next.x = current.x / 2;
	return next;
}
double f4(change change1)
{
	return change1.before.a * change1.before.x -
		   change1.after.a * change1.after.x;
}
void f5(change *change2)
{
	(*change2).after = f3((*change2).before);
}

int main(void) {
	double F1 = f1(3, 0.5);
	printf("%.2lf", F1);
	printf("\n");

	double F2 = f2(3, 0.5);
	printf("%.2lf", F2);
	printf("\n");

	values first = {5, 3.5};
	values next = f3(first);
	printf("%d, %.2lf", next.a, next.x);
	printf("\n");

	change change1 = {{5, 3.5},{10, 1.75}};
	double made = f4(change1);
	printf("f4: %.2lf", made);
	printf("\n");

	change change2 = {{1, 2.5}};
	f5(&change2);
	return 0;
}

