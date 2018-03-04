#include<stdio.h>
void main() {
	int a = 14;
	int b = 100;
	int* p = &a;
	printf("Address for a is %p\n", &a);
	printf("Address inside p is %p\n", p);

	printf("a has value = %d\n", a);
	printf("p has value =%d, in hex = %x\n", p, p);

	*p = 15;
	printf("Now p points to an integer with value = %d\n", *p);
	printf("Now a has value = %d\n", a);

	a = 16;
	printf("Now p points to an integer with value = %d\n", *p);
	printf("Now a has value = %d\n", a);

	p = &b;
	printf("Address for b is %p\n", &b);
	printf("Address inside p is %p\n", p);

	printf("b has value = %d\n", b);
	printf("p points to an integer with value = %d\n", *p);
}