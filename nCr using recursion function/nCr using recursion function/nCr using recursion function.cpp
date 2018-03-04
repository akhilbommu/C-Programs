#include<stdio.h>
int fact(int x) {
	if (x == 0 || x == 1) {
		return 1;
	}
	else {
		return x * fact(x - 1);
	}
}
int main()
{
	int n, r, flag = 0;
	printf("Enter n,r values\n");
	scanf_s("%d%d", &n, &r);
	if (n < r) {
		flag = 1;
	}
	if (flag == 0) {
		printf("%dC%d value is %d\n", n, r, (fact(n)) / (fact(n - r)*fact(r)));
	}
	else if (flag == 1) {
		printf("Cannot be calculated\n");
	}
}

