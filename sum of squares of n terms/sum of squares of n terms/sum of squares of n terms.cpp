#include<stdio.h>
int square(int x) {
	int sqr = x*x;
	return sqr;
}
int main() {
	int n,term,res=0;
	printf("1^2+2^2+3^2+4^2+......+n^2\n");
	printf("Enter value of n :");
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++) {
		term = square(i);
		res = res + term;
	}
	printf("Value of 1^2+2^2+3^2+4^2+......+n^2 when n=%d is %d\n", n, res);
}