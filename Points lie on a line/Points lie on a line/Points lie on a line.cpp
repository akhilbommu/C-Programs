#include<stdio.h>
int main() {
	int x1, y1, x2, y2, x3, y3;
	printf("Enter the 3 points to be checked\n");
	scanf_s("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
	printf("Points are (%d,%d),(%d,%d),(%d,%d)\n", x1, y1, x2, y2, x3, y3);

	if ((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1)) {
		printf("Points lie on a same line\n");
	}
	else {
		printf("Points does not lie on a same line\n");
	}
}