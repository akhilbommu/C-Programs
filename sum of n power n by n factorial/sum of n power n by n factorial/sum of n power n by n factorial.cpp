#include<stdio.h>
int power(int x) {
	int res = 1;
	for (int i = 1; i <= x; i++) {
		res = res * x;
	}
	return res;
}
int factorial(int x) {
	int fac = 1;
	for (int i = 1; i <= x; i++) {
		fac = fac *i;
	}
	return fac;
}
int main() {
	int n;
	float term, res=0;
	printf("1^1/1!+2^2/2!+3^3/3!+4^4/4!+......+n^n/n!\n");
	printf("Enter value of n :");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		term = (float)power(i) / factorial(i);
		res = res + term;
	}
	printf("Value of 1^1/1!+2^2/2!+3^3/3!+4^4/4!+......+n^n/n! when n=%d is %f\n", n, res);
}
