#include<stdio.h>
void main() {
	int size,i,arr[30],choice;
	printf("Enter size of array :\n");
	scanf_s("%d", &size);
	printf("Enter elements :\n");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	menu();
	printf("Enter your choice :");
	scanf_s("%d", &choice);
	switch (choice) {
	case 1:largest(arr);
		break;
	case 2:smallest(arr);
		break;
	case 3:sum(arr);
		break;
	case 4:average(arr);
		break;
	}
}
int menu() {
	printf("Enter 1 to find largest of array\n");
	printf("Enter 2 to find smallest of array\n");
	printf("Enter 3 to find sum of array\n");
	printf("Enter 4 to find average of array\n");
	return 0;
}
int largest(int arr[]) {
	int size, greatest;
	for (int i = 0; i < size; i++) {
		if (arr[i] > greatest) {
			greatest = arr[i];
		}
	}
	return greatest;
	printf("Largest of array is %d", greatest);
}
int smallest(int arr[]) {
	int size, smallest;
	for(int i=0;i<size;i++){
		if (arr[i] < smallest) {
			smallest = arr[i];
		}
	}
	return smallest;
	printf("Smallest of array is %d",smallest);
}
int sum(int arr[]) {
	int sum = 0, size;
	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	return sum;
	printf("Sum of array is %d", sum);
}
float average(int arr[]) {
	int sum = 0, size;
	float avg;
	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	avg = sum / size;
	return avg;
	printf("Average of array is %f", avg);
}