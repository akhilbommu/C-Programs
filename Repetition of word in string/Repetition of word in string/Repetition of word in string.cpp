#include<stdio.h>
int stringlength(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
int ascii(char c) {
	int value=0;
	value = (int)c;
	return value;
}
int main() {
	int arr[26] = { 0 },length,a,value;
	char str[50];
	printf("Enter string\n");
	gets_s(str);
	length = stringlength(str);
	for (int i = 0; i < length; i++) {
		value = ascii(str[i]) - ascii('a');
		arr[value]++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%c : %d times\n",(char)(i+ascii('a')), arr[i]);
	}
}