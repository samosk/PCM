#include <stdio.h> //added a #
int main(void)
{
	int a = 6; //added a ;
	int b = 10; //added a ;
	if (a == 7) { //changed = to ==
		printf("First test was true\n");
	} else if(b > 6 && a > 10) {  //changed from else to else if
		printf("Second test was true\n");
	} else { //added {}
		printf("No test was true\n");
		
	}
	printf("Normal exit\n");
	return 0;
}