#include<stdio.h>
int fact(int num) {
	int fac = 1;
	for (int i = 1; i <= num; i++) {
		fac = fac * i;
	}
	return fac;
}
int main() {
	int n, r,fac_n,fac_r,fac_nr;
	float res;
	printf("Enter value of n and r:\n");
	scanf_s("%d%d", &n, &r);
	fac_n = fact(n);
	fac_r = fact(r);
	fac_nr = fact(n - r);
	res = (fac_n) / ((fac_r)*(fac_nr));
	printf("Value of %dC%d is:%f\n", n, r, res);
}