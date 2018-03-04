#include<stdio.h>
int main() {
	int i, num, j;
	printf("Enter no. of rows:\n");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++) {
		for (j = i; j >= 1; j--) {
			printf("%d ", j);
		}
		printf("\n");
	}
}
