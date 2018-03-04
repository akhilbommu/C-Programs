#include<stdio.h>
int rows, columns;

void matrixAddition(int mat1[][10], int mat2[][10], int mat3[][10]) {
	int i, j;

	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
}

int main() {
	int matrix1[10][10], matrix2[10][10];
	int matrix3[10][10], i, j;
	printf("Enter the no of rows and columns(<= 10) :");
	scanf_s("%d%d", &rows, &columns);
	printf("Enter the input for first matrix : \n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			scanf_s("%d", &matrix1[i][j]);
		}
	}
	printf("First Matrix\n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			printf("%d\t", matrix1[i][j]);
		}
		printf("\n");
	}
	printf("Enter the input for second matrix : \n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			scanf_s("%d", &matrix2[i][j]);
		}
	}
	printf("Second Matrix\n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			printf("%d\t", matrix2[i][j]);
		}
		printf("\n");
	}
	matrixAddition(matrix1, matrix2, matrix3);

	printf("\nResult of Matrix Addition : \n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			printf("%d\t", matrix3[i][j]);
		}
		printf("\n");
	}
	return 0;
}