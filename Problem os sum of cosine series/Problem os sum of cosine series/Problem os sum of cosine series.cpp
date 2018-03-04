#include<stdio.h>
int power(int x, int k) {
	int res = 1;
	for (int i = 0; i < k; i++) {
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
	printf("1-x2/2!+x4/4!-x6/6!+x8/8!-x10/10!\n");
	int x,sign;
	float res,term=0;
	printf("Enter value of x :");
	scanf_s("%d", &x);
	res = 0;
	sign = -1;
	for (int i = 2; i <= 10; i += 2) {
		term = (float)(sign)*(power(x, i))/factorial(i);
		res = res + term;
		sign = sign * -1;
	}
	printf("Value of 1-x2/2!+x4/4!-x6/6!+x8/8!-x10/10! when x=%d is %f\n", x,1+res);
	return 0;
}