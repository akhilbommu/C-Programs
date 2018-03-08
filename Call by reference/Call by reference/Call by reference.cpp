//CALL BY REFERENCE
#include<stdio.h>
void swap1(int *p1, int *p2) {
	int t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
	printf("Inside swap function values are p=%d and q=%d\n", *p1, *p2);
	//Here also copies of values are passed but the copies of address
	//Earlier actual values of integers are cpoied
}
void main() {
	int a = 10, b = 5;
	swap1(&a, &b);
	printf("Inside main values are a=%d and b=%d", a, b);
}
