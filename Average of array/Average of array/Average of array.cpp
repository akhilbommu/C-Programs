#include<stdio.h>
int main() {
	int arr[50],sum=0 ,i, j, temp, size;
	float avg;
	printf("Enter size of array:\n");
	scanf_s("%d", &size);
	printf("Enter elements\n");
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
	sum = 0;
	for (i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	avg = (float)sum / size;
	printf("Average of the array elements %f",avg);
	return 0;
}