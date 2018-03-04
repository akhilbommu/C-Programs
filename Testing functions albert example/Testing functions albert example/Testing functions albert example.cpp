#include<stdio.h>
void Increment(int *p) {
	*p = *p + 1;
	printf("Address of variable x in invrement = %d\n",&p);
	printf("x in function is %d\n", *p);
}
int main() {
	int a=10;
	Increment(&a);
	printf("Address of variable a in invrement = %d\n", &a);
	printf("a in main is %d\n", a);
}