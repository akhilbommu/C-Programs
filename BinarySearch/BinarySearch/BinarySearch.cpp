#include<stdio.h>
int main() {
	int i,arr[20],flag=0,mid,search,size,least,high;
	printf("Enter size of an array\n");
	scanf_s("%d", &size);
	printf("Enter elements in ascending order\n");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("Enter number to search\n");
	scanf_s("%d", &search);
	least = 0;
	high = size - 1;
	while (least <= high) {
		mid = (least + high) / 2;
		if (arr[mid] == search) {
			flag = 1;
			break;
		}
		else {
			if (arr[mid] < search) {
				least = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}
	}
	if (flag == 1) {
		printf("The number is found and its position is = %d\n", mid);
	}
	else {
		printf("The number is not found\n");
	}
	return 0;
}