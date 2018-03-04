#include<stdio.h>
int main() {
	int a = 1025;
	int *p;
	p = &a;
	printf("size of integer is %d bytes\n", sizeof(int));
	printf("Address = %d, value = %d\n", p, *p);
	// Void pointer - Generic pointer
	void *p0;
	p0 = p;
	printf("Address = %d\n",p0);
	//we do not need explicit typecasting here like (char*) . The statement p0 = pis valid and this
	//will not you compilation error and because this particular pointer type is not mapped to any data type
	//we cannot deference this particular variable .so if we try to print *p0 it will give an error 
	// we can only print the address and if we do p0+1 this also give compilation error
}