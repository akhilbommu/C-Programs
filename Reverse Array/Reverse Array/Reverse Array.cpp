#include<stdio.h>
int main() {
	int i,arr[50],size;
	printf("Enter size of array:\n");
	scanf_s("%d", &size);
	printf("Enter numbers of array:\n");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("Array after reversing\n");
	for (i = size - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}