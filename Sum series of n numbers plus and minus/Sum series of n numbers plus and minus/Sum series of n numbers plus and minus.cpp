#include<stdio.h>
int square(int x) {
	int sqr = x*x;
	return sqr;
}
int main() {
	int n, term, res = 0,sign;
	printf("1^2-2^2+3^2-4^2+......+(-1)^n*n^2\n");
	printf("Enter value of n :");
	scanf_s("%d", &n);
	sign = 1;
	for (int i = 1; i <= n; i++) {
		term = (sign)*(square(i));
		res = res + term;
		sign = sign * (-1);
	}
	printf("Value of 1^2+2^2+3^2+4^2+......+(-1)^n*n^2 when n=%d is %d\n", n, res);
}