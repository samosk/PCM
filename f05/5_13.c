#include <stdio.h>
//reads and returns a int to the user
int read_number_1(void){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	return n;
}
//reads and returns a int limited by a maximum value
int read_number_2(int max_num){
	int n;
	do
	{
		printf("Enter a number: ");
		scanf("%d", &n);
	} while (n > max_num);
	return n;
	
}
//reads and returns a int within the given interval
int read_number_3(int min_num, int max_num){
	int n;
	do
	{
		printf("Enter a number: ");
		scanf("%d", &n);
	} while (! (n > min_num && n < max_num));
	return n;
}

int main(void){
	printf("Normal exit\n");
	return 0;
}