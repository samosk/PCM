#include <stdio.h>
int main(void) {
	int input;
	int h;
	int m;
	int s;
	printf("Input seconds: "); //input how many seconds you want to convert to hours: minutes: seconds
	scanf("%d", &input);
	
	h = (input/3600); 
	
	m = (input -(3600*h))/60;
	
	s = (input -(3600*h)-(m*60));
	printf("S - %d\n", s);
	printf("M:S - %d:%d\n", m, s);
	printf("H:M:S - %d:%d:%d\n",h,m,s);
	
	return 0;
}

// manage seconds to minutes, still containing remaining seconds
// manage minutes to hours, still containing remaining minutes and seconds