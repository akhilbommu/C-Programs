#include<stdio.h>
int main() {
	int a;
	int *p;
	a = 10;
	p = &a; // &a = address of a
	printf("Address of p is %d\n", p);
	printf("Value at p is %d\n", *p);  // *p value at address pointed by p);
	printf("%d\n", &a);  //& gives address so it is address of a
	printf("a = %d\n", a);
	*p = 12;  // modifying a value using pointer p(deferencing) 
	printf("a = %d\n", a);
	int b = 20;
	*p = b;
	printf("Address of p is %d\n", p);
	printf("Value at p is %d\n", *p);
	printf("Address p is %d\n", p);
	printf("Value at address p is %d\n", *p);
	printf("size of integer is %d bytes\n", sizeof(int));
	printf("Address p+1 is %d\n", p + 1);
	printf("Value at address p+1 is %d\n", *(p+1)); // some garbage value
	printf("Address p+2 is %d\n", p + 2);
}