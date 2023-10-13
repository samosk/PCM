#include <stdio.h>
int linearSearch(int n, int a[], int choice) 
{
	int i = 0;
	int index = -1;
	while (index == -1 && i < n)
	{
		if (choice == a[i])
		{
			index = i;
		}
		i++;
	}
	return index;
}

int binarySearch(int n, int a[], int choice) {
	int left = 0;
	int right = n-1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if(choice == a[mid]) {
			return mid;
		} else if (choice < a[mid]) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	

	return -1;
}

void printList(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void) {
	int index;
	const int n = 5;
	const int choice = 2;
	int a[] = {1,2,3,4,5};
	index = binarySearch(n, a, choice);
	printList(a,n);

	if (index > -1)
	{
		printf("\nIndex for vardet %d = %d",choice, index);
	} else {
		printf("\nVardet kunde inte hittas");
	}
	

	return 0;
}