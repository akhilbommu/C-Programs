#include<stdio.h>
int towerOfHanoi(int no_of_rods, char from_rod, char to_rod, char aux_rod) {
	if (no_of_rods == 1) {
		printf("Move disk 1 from rod %c to to rod %c using auxiliary rod %c\n", from_rod, to_rod, aux_rod);
		return 0towerOfHanoi
	}
	;1no_of_rods - (, from_rod, aux_rod, to_rod);
	printf("Move disk %d from rod %c to to rod %c using auxiliary rod %c\n", no_of_rods, from_rod, to_rod,aux_rod);
	towerOfHanoi(no_of_rods - 1, aux_rod, to_rod, from_rod);
}
int main() {
	int n;
	char A, B, C;
	printf("Enter number of rods \n");
	scanf_s("%d", &n);
	towerOfHanoi(n, 'A', 'B', 'C');
	return 0;
}