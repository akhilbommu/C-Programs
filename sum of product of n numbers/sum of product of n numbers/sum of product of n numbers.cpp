#include<stdio.h>
int sum(int n) {
	int res = 1;
	for (int i = 1; i <= n; i++) {
		res = res * i;
	}
	return res;
}
int main() {
	int n, term, res = 0;
	printf("(1+(1*2)+(1*2*3)+(1*2*3*4)+...+(1*2*3*4...*n))\n");
	printf("Enter value of n :");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		term = sum(i);
		res = res + term;
	}
	printf("Value of (1+(1*2)+(1*2*3)+(1*2*3*4)+...+(1*2*3*4...*n)) when n=%d is %d\n", n, res);
}
