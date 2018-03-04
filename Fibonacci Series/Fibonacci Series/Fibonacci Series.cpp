#include <stdio.h>

int main()
{
	int i, n, x, a = 0, b = 1;
	printf("Enter the value of n :\n");
	scanf_s("%d", &n);
	printf("%d %d ", a, b);
	x = a + b;
	for (i = 1; i <= n; i++) {
		printf("%d ", x);
		a = b;
		b = x;
		x = a + b;
	}

}
