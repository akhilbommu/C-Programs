#include<stdio.h>
int main()
{
	int a = 1, i, j, n;
	printf("Enter the value of n\n");
	scanf_s("%d", &n);
	for (i = 0; i<n; i = i + 1) {
		for (j = 0; j<i + 1; j = j + 1) {
			printf("%d ", a);
			a++;
		}
		printf("\n");
	}
}
