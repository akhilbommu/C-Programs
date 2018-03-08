#include <stdio.h>
int main()
{
	int count = 0;
	char *sp;
	char str[30], character;
	printf("Enter a string\n");
	gets_s(str);
	printf("Enter a character to find the frequency\n");
	scanf_s(" %c", &character);
	sp = str;
	while (*sp != '\0') {
		if (*sp == character) {
			count++;
		}
		sp++;
	}
	printf("Frequency of %c = %d", character, count);

}
