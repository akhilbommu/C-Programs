#include<stdio.h>
int main() {
	int arr[50], i, j, pos, element, temp, size;
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
	printf("Enter the position of the element to be inserted\n");
	scanf_s("%d", &pos);
	printf("Enter the element to be inserted\n");
	scanf_s("%d", &element);
	for (i = size; i > pos; i--) {
		arr[i] = arr[i - 1];
	}
	arr[pos] = element;
	printf("Updated size of array is %d\n", size + 1);
	printf("Array after inserting the element\n");
	for (i = 0; i <= size; i++) {
		printf("%d ", arr[i]);
	}
}