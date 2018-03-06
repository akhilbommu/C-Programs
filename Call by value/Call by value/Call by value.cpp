//CALL BY VALUE
#include<stdio.h>
void swap(int i, int j) {
	int t;
	t = i;
	i = j;
	j = t;
	printf("Inside swap function values are i=%d and j=%d\n", i, j);
	//Here inside swap function 'i' and 'j' are not original 'a' and 'b'. They are copies of 'a' and 'b'
	//The moment function ends copied value will vanish
	//Original 'a' and 'b' in never change until they are modified
	//Original values never go to function only same copy of values will be send
}
void main() {
	int a = 10, b = 5;
	swap(a, b);
	printf("Inside main values are a=%d and b=%d", a, b);
}
