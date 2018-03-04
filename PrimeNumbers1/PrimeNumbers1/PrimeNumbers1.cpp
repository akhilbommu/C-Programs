#include<stdio.h>
int main() {
	int n,i,j,count;
	printf("Enter the number upto which you want prime numbers:\n");
	scanf_s("%d", &n);
	printf("Prime numbers upto given numbers are: ");
	for (i = 1; i < n; i++) {
		count = 0;
		for (j = 1; j <= i; j++) {
			if (i%j == 0) {
				count = count + 1;
			}
		}
		if (count == 2) {
			printf("%d ", i);
		}
	}

}