#include<stdio.h>
int main() {
	int n,sign=-1,res;
	printf("-1,4,-7,10,-13,....,n\n");
	printf("Enter value of n :");
	scanf_s("%d", &n);
	printf("Generated series is ");
	for (int i = 1; i <= n; i += 3) {
		res = sign*i;
		sign = sign * -1;
		printf("%d ", res);
	}
	return 0;
}