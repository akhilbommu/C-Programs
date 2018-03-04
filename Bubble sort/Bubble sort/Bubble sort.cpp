#include<stdio.h>
int main() {
	int arr[50], i, j, temp, size;
	printf("Enter size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements\n");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
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
	printf("Sorted list in ascending order\n");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}
