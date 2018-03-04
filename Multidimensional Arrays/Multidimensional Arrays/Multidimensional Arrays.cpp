#include<stdio.h>
int main() {
	int arr[10][10][10], i, j, k, count = 1 ;
	int x, y, z;
	printf("Enter values of x,y,z : ");
	scanf_s("%d%d%d", &x, &y, &z);
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			for (k = 0; k < z; k++) {
				arr[i][j][k] = count;
				count++;
			}
		}
	}
	printf("Multidimensional Array :\n");
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			for (k = 0; k < z; k++) {
				printf("a[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
			}
		}
	}
}