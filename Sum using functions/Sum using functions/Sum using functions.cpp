#include<stdio.h>
void swap(int a, int b) {
	printf("Before swapping %d and %d\n", a, b);
	int c;
	c = a;
	a = b;
	b = c;
	printf("After swapping %d and %d\n",a ,b);
}
void main() {
	int a = 5, b = 6;
	swap(a, b);
}