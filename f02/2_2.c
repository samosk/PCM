#include <stdio.h>
#include <stdbool.h>
int main(void)
{
int n1;
int n2;
printf("Give a value to n1 :\n");
scanf("%d", &n1);
printf("Give a value to n2 :\n");
scanf("%d", &n2);
printf("%d\n", (n1 > n2) && (n1 < n2)); //if n1 is greater than n2 AND n1 is lesser than n2, always false
printf("%d\n",(n1 > n2) || (n1 < n2)); //if n1 is greater than n2 OR n1 is lesser than n2, always true
printf("Normal exit.\n");
return 0;
}