#include<stdio.h>
int maxNum(int arr1[] , int size) {
	int max = arr1[0];
	for (int i = 0; i < size; i++) {
		if (arr1[i] > max) {
			max = arr1[i];
		}
	}
	return max;
}
int minNum(int arr1[] , int size) {
	int min = arr1[0];
	for (int i = 0; i < size; i++) {
		if (arr1[i] < min) {
			min = arr1[i];
		}
	}
	return min;
}

int main() {
	int size,arr[40],i;
	printf("Enter size of array: ");
	scanf_s("%d", &size);
	printf("Enter elements of array\n");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("Maximum number in array is %d \n",maxNum(arr,size));
	printf("Minimum number in array is %d \n", minNum(arr, size));
	printf("Size of array is %d\n", sizeof(arr));
	printf("Size of element is %d\n", sizeof(arr[0]));
}