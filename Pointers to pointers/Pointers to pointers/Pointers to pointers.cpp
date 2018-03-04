#include<stdio.h>
int main() {
	int a = 5; //when program is run some memory is allocated to x
	int *p;
	p = &a;
	*p = 6;  // value at that address will be modified to 6
	int **q;
	q = &p;
	int ***r;
	r = &q;
	printf("*p = %d\n", *p);
	printf("*q = %d\n", *q);
	printf("*(*q) = %d\n", *(*q));
	printf("**r = %d\n", **r);
	printf("***r = %d\n", ***r); 
	***r = 10;
	printf("x = %d\n", a);
	**q = *p + 2;
	printf("x = %d\n", a);
}