#include<stdio.h>
int main() {
	int rows,cols,i,j,arr[10][10];
	printf("Enter no. of rows and columns of matrix: ");
	scanf_s("%d%d", &rows, &cols);
	printf("Enter elements:");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j ++ ) {
			scanf_s("%d", &arr[i][j]);
		}
	}
	printf("Matrix\n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("Lower Triangular Matrix\n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			if (i >= j) {
				printf("%d\t", arr[i][j]);
			}
			else {
				printf("0\t");
			}
		}
		printf("\n");
	}
	printf("Upper Triangular Matrix\n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			if (j >= i) {
				printf("%d\t", arr[i][j]);
			}
			else {
				printf("0\t");
			}
		}
		printf("\n");
	}

}