#include<stdio.h>
int main() {
	int i,j;
	char c;
	printf("Enter the alphabet :");
	scanf_s("%c", &c);
	printf("Alphabet series is :\n");
	for (i = 'A'; i <= c; i++) {
		for (j = 'A'; j <= i; j++) {
			printf("%c ", j);
		}
		printf("\n");
	}
}