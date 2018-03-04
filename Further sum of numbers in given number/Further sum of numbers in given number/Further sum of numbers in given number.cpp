#include<stdio.h>
int main() {
	int num, sum, res;
	printf("Enter a number : ");
	scanf_s("%d", &num);
	while (num > 9) {
		sum = 0;
		while (num > 0) {
			res = num % 10;
			sum = sum + res;
			num = num / 10;
		}
		num = sum;
	}
	printf("Final Sum is %d\n", num);
}