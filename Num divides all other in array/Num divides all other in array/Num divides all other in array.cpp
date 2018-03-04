#include<stdio.h>
int main() {
	int arr[50],i,j,size,temp,flag=0;
	printf("Enter size of array :");
	scanf_s("%d", &size);
	printf("Enter elements :");
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
	printf("Sorted array is :");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Number which divides all other elements of array is :");
	for (i = 1; i < size; i++) {
		if ((arr[i] % arr[0]) == 0) {
			flag = 1;
			continue;
		}
		printf("No number divides all other numbers\n");
		return 0;
	}
	if (flag == 1) {
		printf("%d\n", arr[0]);
	}
	return 0;
}