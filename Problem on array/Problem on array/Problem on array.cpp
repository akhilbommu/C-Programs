#include<stdio.h>
int findDouble(int arr[], int size, int num,int large) {
	for (int i = 0; i < size; i++) {
		if (num == large) {
			return 0;
		}
		else if (num * 2 == arr[i]) {
			num = arr[i];
			printf("%d ", num);
		}
	}
	if (num < large) {
		findDouble(arr, size, num, large);
	}
	else {
		return 0;
	}
}

int maximum(int arr[], int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int main() {
	int i,max, size, arr[30], ele;
	printf("Enter size of array\n");
	scanf_s("%d", &size);
	printf("Enter elements\n");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("Enter element to search for its doubles :");
	scanf_s("%d", &ele);
	max = maximum(arr, size);
	findDouble(arr, size, ele, max);
}