#include<stdio.h>

int a = 10;
int b = 20;
void swap(int n1, int n2) {
	printf("swap: address of a = %p\n", &n1);
	printf("swap: address of b = %p\n", &n2);
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("a=%d and b=%d\n", n1, n2);
}
void main() {
	printf("a=%d and b=%d\n", a, b);
	printf("main: address of a = %p\n", &a);
	printf("main: address of b = %p\n", &b);
	swap(a, b);
	printf("a=%d and b=%d\n", a, b);

}