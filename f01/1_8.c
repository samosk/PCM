#include <stdio.h>
int main(void)
{
float n1;
float n2;
printf("Give a value to n1 :\n");
scanf("%f", &n1);
printf("Give a value to n2 :\n");
scanf("%f", &n2);
printf("The sum of n1 and n2 is: %5.2f\n",n1 + n2);
printf("The difference of n1 and n2 is: %5.2f\n", n1 - n2);
printf("The product of n1 and n2 is: %5.2f\n", n1 * n2);
printf("The quote of n1 and n2 is: %5.2f\n", n1 / n2);
printf("Normal exit.\n");
return 0;
}