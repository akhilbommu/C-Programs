#include<stdio.h>
int n;
float average(float arr[30], int n) {
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	float avg = sum / n;
	return avg;
}
int main() {
	int size, i;
	float arr[30];
	printf("Enter size of array :");
	scanf_s("%d", &size);
	printf("Enter elements : ");
	for (i = 0; i < size; i++) {
		scanf_s("%f", &arr[i]);
	}
	printf("Average of entered numbers is %.2f\n", average(arr, size));	
}