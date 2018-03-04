#include<stdio.h>
int add(int arr[], int num) {
	int s;
	if (num == 1) {
		return arr[0];
	}
	else {
		s = arr[num - 1] + add(arr, num - 1);
	}
}
int main() {
	int arr[50], n, i, sum;
	printf("Enter n value\n");
	scanf_s("%d", &n);
	printf("Enter elements\n");
	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	sum = add(arr, n);
	printf("Sum is %d\n", sum);
}