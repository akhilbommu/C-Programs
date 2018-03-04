#include<stdio.h>
void main() {
	int i, max, arr[5] = { 4,10,14,16,18 };
	int *ip;
	ip = arr;            // (or) ip=&arr[0]  address of arr[0] stores in ip
	printf("ip is %d\n", ip);
	max = *ip;    // if we print here max will be 4
	printf("initial max is %d\n", max);
	i = 1;
	while (i <= 4) {
		ip++;  //ip points to 10 and so on
		printf("present ip is %d\n", ip);
		if (*ip>max) {
			max = *ip;
			printf("present max is %d\n", max);
		}
		i++;
	}
	printf("Max = %d\n", max);
}
