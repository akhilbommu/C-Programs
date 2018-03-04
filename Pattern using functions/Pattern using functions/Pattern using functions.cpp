#include<stdio.h>
int pattern(int n) {
	for (int i = 0; i < n ; i++) {
		for (int j = 0; j <= i ; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0; 
}
void main() {
	int rows;
	printf("Enter no. of rows:");
	scanf_s("%d", &rows);
	int pattern1 = pattern(rows);
}
