#include<stdio.h>
int main() {
	int arr[50], i, j, size,temp;
	printf("enter size:\n");
	scanf_s("%d", &size);
	printf("enter elements\n");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < size - 1; i++) {
		for (j = i; j < size - 1 ; j++) {
			if (arr[i] > arr[j + 1]) {
				temp = arr[i];
				arr[i] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("array after sorting :\n"); 
	for (i = 0; i < size;i++) {
		printf("%d	", arr[i]);
	}
}