#include<stdio.h>
long int factorial(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	return fact;
}
int main() {
	float sum = 0;
	int i, n;
	printf("Enter value of n:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		sum = sum + (float)i / factorial(i);
	}
	printf("Sum of series : %.2f\n", sum);
}