#include <stdio.h>
void main() {
	int a[10][10], b[10][10], r[10][10] = { 0 }, r1, c1, r2, c2, i, j, k;
	printf("Enter the number of rows and columns of first matrix\n");
	scanf_s("%d%d", &r1, &c1);
	printf("Enter the elements of first matrix\n");
	for (i = 0; i<r1; i++) {
		for (j = 0; j<c1; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("Enter the number of rows and columns of second matrix\n");
	scanf_s("%d%d", &r2, &c2);
	printf("Enter the elements of second matrix\n");
	for (i = 0; i<r2; i++) {
		for (j = 0; j<c2; j++) {
			scanf_s("%d", &b[i][j]);
		}
	}
	printf("Product of entered matrices:-\n");
	for (i = 0; i<r1; i++) { 
		for (j = 0; j<c2; j++) {
			for (k = 0; k<r2; k++) {
				r[i][j] = r[i][j] + a[i][k] * b[k][j];
			}
			printf("%d  ", r[i][j]);
		}
		printf("\n");
	}
}