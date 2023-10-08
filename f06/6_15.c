#include <stdio.h>
void max(int n, int a[], int *m)
{
*m = a[0];
for (int i = 1 ; i < n ; i++) {
	if (a[i] > *m) {
		*m = a[i];
	}
}
}
int main(void)
{
int a[8] = {13, 3, 4, 6, 7, 8, 9, 1};
int largest;
max(8, a, &largest);
printf("Largest = %d\n", largest);
return 0;
}