#include<stdio.h>
int main() {
	int n1, n2,temp;
	int *in1, *in2;
	printf("Enter two numbers :");
	scanf_s("%d%d", &n1, &n2);
	printf("Numbers before swapping are n1 = %d , n2 = %d\n", n1, n2);
	in1 = &n1;
	in2 = &n2;
	temp = *in1;
	*in1 = *in2;
	*in2 = temp;
	printf("Numbers after swapping are n1 = %d , n2 = %d ", *in1, *in2);
}