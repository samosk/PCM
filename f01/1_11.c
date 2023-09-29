#include <stdio.h>
int main(void)
{
int n1;
int n2;
printf("Give a value to n1 :\n");
scanf("%d", &n1);
printf("Give a value to n2 :\n");
scanf("%d", &n2);
printf("The sum of n1 and n2 is: %d\n",n1 + (n2 * 5));
printf("The difference of n1 and n2 is: %d\n", n1 - n2);
printf("The product of n1 and n2 is: %d\n", (n1 * n2) + 5);
printf("The quote of n1 and n2 is: %d\n", n1 / n2);
printf("The remainder of n1 and n2 is: %d\n", n1 % n2);
printf("Normal exit.\n");
return 0;
}