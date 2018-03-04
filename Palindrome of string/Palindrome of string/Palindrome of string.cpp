#include<stdio.h>
int stringlength(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
int main() {
	char str[40];
	int i, len, count = 0,positionOfWrongLetter;
	printf("Enter a string :");
	gets_s(str);
	len = stringlength(str);
	printf("Length of the string is %d\n", len);
	for (i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) {
			positionOfWrongLetter = i;
			count++;
		}
	}
	if (count == 0) {
		printf("%s is a palindrome\n", str);
	}
	else if (count == 1) {
		printf("%s is not palindrome\n", str);
		printf("To be a palindrome %c at index %d should be %c at index %d\n", str[len - positionOfWrongLetter - 1],len-positionOfWrongLetter-1, str[positionOfWrongLetter],positionOfWrongLetter);
	}
	else if (count >= 2) {
		printf("%s cannot be a palindrome because two or more changes have to be done\n", str);
	}
	return 0;
}