#include<stdio.h>
int pattern(int n) {
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
void main() {
	int pattern1 = pattern(10);
}
