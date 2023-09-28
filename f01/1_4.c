#include <stdio.h>
int main(void)
{
int no_guests;
int no_sausages;
printf("How many guesta are coming?\n");
scanf("%d", &no_guests);
no_sausages = no_guests * 2 + 5;
printf("You need %d sausages", no_sausages);
return 0;
}