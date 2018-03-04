#include<stdio.h>
int add(int n) {
	int ad;
	if (n == 1)
		return 1;
	else {
		ad = n + add(n - 1);
		return ad;
	}
}
int main() {
	int num;
	printf("Enter the number\n");
	scanf_s("%d", &num);
	printf("Sum upto %d numbers is %d", num, add(num));
}