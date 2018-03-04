#include<stdio.h>
int main() {
	int size, arr[20], flag = 0, i, del_ele, pos;
	printf("Enter size of array\n");
	scanf_s("%d", &size);
	printf("Enter elements of array\n");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("Enter element to be deleted ");
	scanf_s("%d", &del_ele);
	for (i = 0; i < size; i++) {
		if (arr[i] == del_ele) {
			pos = i;
			flag = 1;
		}
	}
	if (flag == 1) {
		for (i = pos + 1; i <= size; i++) {
			arr[i - 1] = arr[i];
		}
		printf("Array after deleting the element\n");
		for (i = 0; i < size - 1; i++) {
			printf("%d ", arr[i]);
		}
	}
	else if (flag == 0) {
      	printf("Please enter correct element\n");
	}
}