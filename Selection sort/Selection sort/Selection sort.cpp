#include<stdio.h>
int selectionSort(int arr[], int size) {
	int min;
	for(int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			min = arr[i];
			if (arr[j] < min) {
				min = arr[j];
			}
		}
		int temp = arr[i];
		arr[i] = min;
		min = temp;
	}
	return 0;
}
int main() {
	int size,i,arr[30];
	printf("Enter size of array :");
	scanf_s("%d", &size);
	printf("Enter elements of array :");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	selectionSort(arr, size);
}