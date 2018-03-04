// equalarrays.cpp : Defines the entry point for the console application.
//

#include<stdio.h>


int main()
{
	int i, j, size1, size2, arr1[20], arr2[20];
	printf("Enter size of arr1\n");
	scanf_s("%d", &size1);
	printf("Enter values of arr1\n");
	for (i = 0; i < size1; i++) {
		scanf_s("%d", &arr1[i]);
	}
	printf("Enter size of arr2\n");
	scanf_s("%d", &size2);
	printf("Enter values of arr2\n");
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
			printf("Arrays are equal");
		}
	}


