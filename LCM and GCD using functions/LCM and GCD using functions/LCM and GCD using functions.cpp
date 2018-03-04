#include<stdio.h>
int lcm_gcd(int n1, int n2) {
	int product = n1*n2;
	while (n1 != n2) {
		if (n1 > n2) {
			n1 = n1 - n2;
		}
		else {
			n2 = n2 - n1;
		}
	}
	int lcm = product / n1;
	printf("GCD = %d\n", n1);
	printf("LCM = %d\n", lcm);
	return 0;
} 

int main() {
	int a, b;
	printf("Enter two positive numbers:\n");
	scanf_s("%d%d", &a, &b);
	lcm_gcd(a, b);
}