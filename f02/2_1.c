#include <stdio.h>
int main(void)
{
int n1;
int n2;
printf("Give a value to n1 :\n");
scanf("%d", &n1);
printf("Give a value to n2 :\n");
scanf("%d", &n2);
printf("%d\n",n1 == n2);
printf("%d\n", n1 != n2);
printf("%d\n", n1 > n2);
printf("%d\n", n1 < n2);
printf("%d\n", n1 >= n2);
printf("%d\n", n1 <= n2);
printf("Normal exit.\n");
return 0;
}