#include <stdio.h>
#include <stdbool.h>
int main(void)
{
bool i = false;
bool j = true;
if (i) {
	printf("i was true!\n");
}
if (j) {
	printf("i was true!\n");
}
if (i && j) {
	printf("'i && j' was true!\n");
}
if (i || j) {
	printf("'i || j' was true!\n");
}
}