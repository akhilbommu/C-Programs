#include<stdio.h>
void main() {
	int n, reversedNumber, remainder;
	printf("Enter a number:");
	scanf_s("%d", &n);
	reversedNumber = 0;
	while (n>0) {
		remainder = n % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		n = n / 10;
	}
	while (reversedNumber>0) {
		remainder = reversedNumber % 10;
		reversedNumber = reversedNumber / 10;
		switch (remainder) {
			case 0:printf("Zero ");
				break;
			case 1:printf("One ");
				break;
			case 2:printf("Two ");
				break;
			case 3:printf("Three ");
				break;
			case 4:printf("Four ");
				break;
			case 5:printf("Five ");
				break;
			case 6:printf("Six ");
				break;
			case 7:printf("Seven ");
				break;
			case 8:printf("Eight ");
				break;
			case 9:printf("Nine ");
				break;
		}
	}
}
