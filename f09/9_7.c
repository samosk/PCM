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
	index = linearSearch(n, a, choice);
	printList(a,n);

	if (index > -1)
	{
		printf("\nIndex for vardet %d = %d",choice, index);
	} else {
		printf("\nVardet kunde inte hittas");
	}
	

	return 0;
}