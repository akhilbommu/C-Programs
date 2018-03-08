#include<stdio.h>
int main() {
	char *p;
	int count = 0;
	char str[30];
	printf("Enter the string\n");
	gets_s(str);
	p = str;
	while (*p != '\0') {
		if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u') {
			count++;
		}
		p++;
	}
	printf("No. of vowels in above string is %d", count);
}
