#include<stdio.h>
int main() {
	int a[10][10],i,j,r1,c1;
	printf("Enter number of rows and columns of matrix:");
	scanf_s("%d%d", &r1, &c1);
	printf("Enter elements\n");
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c1; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("Matrix\n");
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c1; j++) {
			printf("%d	",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix\n");
	for (i = 0; i < c1; i++) {
		for (j = 0; j < r1; j++) {
			printf("%d	", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}