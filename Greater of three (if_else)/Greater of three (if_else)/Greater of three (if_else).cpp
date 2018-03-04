#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a,b,c values\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b && a > c) {
		printf("a is greater");
	}
	else if (b > a && b > c) {
		printf("b is greater");
	}
	else {
		printf("%d is greater",c);
	}
}


