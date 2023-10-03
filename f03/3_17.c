#include <stdio.h>
int main(void)
{
	int n;
	do
	{
		printf("Enter an integer: ");
		scanf("%d", &n);
		while (n > 0)
		{
			printf("%d\n", n);
			n -= n;
		}
		
	} while (n == 0);
	
}
// Enter an int and print the int if it's positive
// always scan for a int once, before closing the program