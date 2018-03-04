#include<stdio.h>
int main() {
	float arr[50], temp, med, avg;
	int i, j, size;
	printf("Enter the size of array:\n");
	scanf_s("%d", &size);
	printf("Enter values\n");
	for (i = 0; i < size; i++) {
		scanf_s("%f", &arr[i]);
	}
	for (i = 0; i < size; i++) {
		for (j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("Array elements after sorting\n");
	for (i = 0; i < size; i++) {
		printf("%f ", arr[i]);
	}
	printf("\n");
	if (size % 2 == 0) {
		med = arr[size / 2] + arr[(size / 2) - 1];
		avg = med / 2;
		printf("median is %f", avg);
	}
	else {
		med = arr[(size - 1) / 2];
		printf("median is %f", med);
	}
}
