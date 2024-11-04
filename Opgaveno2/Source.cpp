#include<stdio.h>

void foo1(int xVal);
void foo2(int dummy);

int main() {
	foo1(7);
	printf("\n");
	foo2(11);
	return 0;
}
void foo1(int xVal) {
	int x;
	x = xVal;
	// Print the address and value of x here
	printf("The value of x is : %d\n", x);
	printf("The memory address of x is : %p\n", &x);
}
void foo2(int dummy) {
	int y;
	y = dummy;
	// Print the address and value of y here
	printf("The value of y is : %d\n", y);
	printf("The memory address of y is : %p\n", &y);
}