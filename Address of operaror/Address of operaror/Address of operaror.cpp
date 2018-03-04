#include<stdio.h>
int main() {
	int a = 10;
	float f = 3.14;
	char c = 'A';

	printf("a=%d and its memory adress (&a)= %p\n", a, &a);
    printf("f=%f and its memory adress (&f)= %p\n", f, &f);
	printf("c=%c and its memory adress (&c)= %p\n", c, &c);
}