#include<stdio.h>
void searchElement(int *p1, int size,int element) {
	int i,flag=0,pos,arr[20];
	for (i = 0; i < size; i++) {
		if (*(p1 + i) == element) {
			pos = i;
			flag = 1;
			printf("Element is found at index %d\n", pos);
		}
		continue;
	}
	if (flag == 0) {
		printf("Element is not found\n");
	}
	
}
int main() {
	int i,element,size,arr[20];
	printf("Enter size of array :");
	scanf_s("%d", &size);
	printf("Enter elements of array :");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("Enter element to be searched :");
	scanf_s("%d", &element);
	searchElement(arr, size, element);
}