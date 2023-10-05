#include <stdio.h>
#include <stdbool.h>
bool equal(int a, int b)
{
	if (a == b)
	{
		return true;
	} else {
		return false;
	}
}
bool unequal(int a, int b)
{
	return !equal(a,b);
	
}

int main(void)
{
	int n1 = 123;
	int n2 = 123;
	int result;
	result = equal(n1, n2);
	printf("The sum is %d", result);
	result = unequal(n1, n2);
	printf("The sum is %d", result);
	return 0;
}