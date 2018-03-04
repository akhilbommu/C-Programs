#include<stdio.h>
#include<limits.h>
int main() {
	int arr[50], i, size, smallest , greatest;
	printf("Enter size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements\n");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	smallest = INT_MAX;
	greatest = INT_MIN;
	if (size == 0) {
		printf("No elements in the list\n");
		printf("greatest = null\nsmallest = null\n");
	}
	else if (size == 1) {
		printf("greatest = %d\nsmallest = %d\n", arr[0], arr[0]);
	}
	else if (size == 2) {
		if (arr[0] < arr[1]) {
			printf("smallest = %d\ngreatest = %d\n", arr[0], arr[1]);
		}
		else {
			printf("smallest = %d\ngreatest = %d\n", arr[1], arr[0]);
		}
	}
	else {
		for (i = 0; i < size; i++) {
			if (arr[i] > greatest) {
				greatest = arr[i];
			}
			if (arr[i] < smallest) {
				smallest = arr[i];
			}
		} 
		printf("smallest = %d\ngreatest = %d\n", smallest, greatest);
	}
	return 0;
}