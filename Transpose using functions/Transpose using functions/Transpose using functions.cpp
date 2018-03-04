#include<stdio.h>
int transpose(int arr1[10][10]) {
	int r1,c1,arr2[10][10];
	printf("Enter same no of rows and columns here : ");
	scanf_s("%d%d", &r1, &c1);
	for (int i = 0; i < c1; i++) {
		for (int j = 0; j < r1; j++) {
			arr2[i][j] = arr1[j][i];
		}
	}
	printf("Transpose of matrix:\n");
	for (int i = 0; i < c1; i++) {
		for (int j = 0; j < r1; j++) {
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int main() {
	int arr1[10][10], i, j, r1, c1;
	printf("Enter number of rows and columns of matrix:");
	scanf_s("%d%d", &r1, &c1);
	printf("Enter elements\n");
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c1; j++) {
			scanf_s("%d", &arr1[i][j]);
		}
	}
	printf("Matrix:\n");
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}

	printf("Transpose of Matrix\n");
	transpose(arr1);
	return 0;
}

