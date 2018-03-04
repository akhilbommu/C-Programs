#include<stdio.h>
int square(int x) {
	int res = x * x;
	return res;
}
int cube(int x) {
	int res = x * x * x;
	return res;
}
int main() {
	int n,i;
	float term,res;
	printf("1+3^2/3^3+5^2/5^3+7^2/7^3+....+n^2/n^3\n");
	printf("Enter value of n :");
	scanf_s("%d",&n);
	res = 0;
	for (i = 3; i <= n; i += 2) {
		term = (float) square(i) / cube(i) ;
		res = res + term;
	}
	printf("Value of 1+3^2/3^3+5^2/5^3+7^2/7^3+....+n^2/n^3 when n=%d is %f\n",n,1+res);
}