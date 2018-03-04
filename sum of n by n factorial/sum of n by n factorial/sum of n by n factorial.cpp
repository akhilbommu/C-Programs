#include<stdio.h>
int factorial(int x) {
	int fac = 1;
	for (int i = 1; i <= x; i++) {
		fac = fac *i;
	}
	return fac;
}
int main() {
	int n;
	float term,res;
	printf("1/1!+2/2!+3/3!+4/4!+5/5!+6/6!+.................+n/n!\n");
	printf("Enter value of n :");
	scanf_s("%d", &n);
	res = 0;
	for (int i = 1; i <= n; i++) {
		term =(float) i / factorial(i);
		res = res + term;
	}
	printf("Value of 1/1!+2/2!+3/3!+4/4!+5/5!+6/6!+.....+n/n! when n=%d is %f\n", n, res);
}