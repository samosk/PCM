#include <stdio.h>
int main(void) {
	int i = 0;
	int input;
	scanf("%d", &input);
	while (i < input) {
		// satserna man vill utföra flera gånger
		// skrivs in här
		printf("%d", i);
		i++;
	}
	return 0;
}