#include<stdio.h>
int pow(int x, int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return (x*pow(x, n - 1));
	}
}
int main() {
	int base, exponent;
	printf("Enter the values of base and exponent :");
	scanf_s("%d%d", &base, &exponent);
	printf("value of %d power %d is %d\n", base, exponent, pow(base, exponent));
}