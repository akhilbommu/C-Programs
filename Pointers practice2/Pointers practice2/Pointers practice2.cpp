#include<stdio.h>
int main() {
	int a = 1025;
	int *p;
	p = &a;
	printf("size of integer is %d\n", sizeof(int));
	printf("Address = %d, value = %d\n", p, *p);
	printf("Address = %d, value = %d\n", p+1, *(p+1));
	char *p0;
	p0 = (char*)p; // address of p0 is same as address of p // typecasting
	printf("size of char is %d\n", sizeof(char));
	printf("Address = %d, value = %d\n", p0, *p0);
	// 1025 = 00000000 00000000 00000100 00000001
	printf("Address = %d, value = %d\n", p0 + 1, *(p0 + 1));
	// value is 4 because p0+1 now points to 2nd byte of 1025 as p0 pointed to 1st byte
}