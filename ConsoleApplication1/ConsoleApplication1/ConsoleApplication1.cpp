#include<stdio.h>
int power(int base, int exp) {
	int res=1;
	for (int i = 1; i <= exp; i++) {
		res = res * base ;
	}
	return res;
}
int n_term(int first, int r,int i) {
	int term = first * power(r, i - 1);
	return term;
}
int main() {
	int first, sec,no_of_terms,com_ratio,sum;
	printf("Enter first 2 numbers for finding common Difference\n");
	scanf_s("%d%d", &first, &sec);
	printf("Enter number of terms in series\n");
	scanf_s("%d", &no_of_terms);
	com_ratio = sec / first;
	printf("Common Ratio is %d\n",com_ratio);
	printf("Terms of the GP series\n");
	for (int i = 1; i <= no_of_terms; i++) {
		printf("%d ", n_term(first, com_ratio, i));
	}
	sum = 0;
	for (int i = 1; i <= no_of_terms; i++) {
		sum =  sum + n_term(first, com_ratio , i);
	}
	printf("\nSum of the series is = %d",sum);
}