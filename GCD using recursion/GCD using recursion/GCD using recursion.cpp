#include<stdio.h>
int gcd(int a,int b) {
	if (a == b) {
		return a;
	}
	else if (a > b){
		a = a - b;
		return gcd(a,b);
	}
	else {
		b = b - a;
		return gcd(a, b);
	}
}
int main() {
	int num1, num2;
	printf("Enter two positive integers :");
	scanf_s("%d%d", &num1, &num2);
	printf("GCD = %d\n", gcd(num1, num2));
}