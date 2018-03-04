#include<stdio.h>
int SumElements(int arr[50], int size) {
	int sum = 0;
	printf("Enter numbers:\n");
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	printf("Sum inside function is %d\n", sum);
	return sum;
}
void main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum1 = SumElements(a, 10);
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum = sum + a[i];
	}
	printf("Sum outside function is %d\n", sum);
}