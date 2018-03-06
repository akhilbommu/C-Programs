#include<stdio.h>
int main() {
	int i,pos, size,arr[20],element,flag=0;
	printf("Enter size of array :");
	scanf_s("%d", &size);
	printf("Enter elements of array :");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("Enter element to be searched :");
	scanf_s("%d", &element);
	for (i = 0; i < size; i++) {
		if (arr[i] == element) {
			pos = i;
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("Element is not found\n");
	}
	else {
		printf("Element is found at position %d", i);
	}
}
