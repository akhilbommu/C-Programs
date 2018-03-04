#include<stdio.h>
int main() {
	int arr[50], size, i, count, j;
	printf("Enter size of array:\n");
	scanf_s("%d", &size);
	printf("Enter the elements\n");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("Prime numbers are:\n");
	for (i = 0; i < size; i++) {
		count = 0;
		for (j = 1; j <= arr[i]; j++) {
			if (arr[i] % j == 0) {
				count++;
			}
		}
		if (count == 2) {
			printf("%d ", arr[i]);
		}
	}
}