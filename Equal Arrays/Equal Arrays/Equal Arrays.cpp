#include<stdio.h>
int main() {
	int arr1[20],arr2[20],i,size1,size2;
	printf("Enter size of first array\n");
	scanf_s("%d", &size1);
	printf("Enter first array\n");
	for (i = 0; i < size1; i++) {
		scanf_s("%d", &arr1[i]);
	}
	printf("Enter size of second array\n");
	scanf_s("%d", &size2);
	printf("Enter second array\n");
	for (i = 0; i < size2; i++) {
		scanf_s("%d", &arr2[i]);
	}
	if (size1 != size2) {
		printf("Arrays are not equal\n");
	}
	else {
		for (i = 0; i < size1; i++) {
			if (arr1[i] == arr2[i]) {
				continue;
			}
			else {
				printf("Arrays are not equal\n");
				return 0;
			}
		}
		printf("Arrays are equal\n");
		return 0;
	}
}