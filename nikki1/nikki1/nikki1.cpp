#include<stdio.h>
#include<string.h>
void print(char*C) {
	int i;
	while (C[i] != '\0') {
		printf("%c", C[i]);
		i++;
	}
}
void main(){
	char C[20]="Hello";
	print(C);
}

