/*

write a C program to store n number of elements  & reallocate the
memory to store some more elements using realloc().
Sample I/O:
Enter size of list
4
Enter 4 numbers
2 5 3 7
The numbers in the list are
2 5 3 7
Enter new size of list
7
Enter 3 numbers
9 1 4
The numbers in the list are
2 5 3 7 9 1 4

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size, i, new_size;
	int *ip, *nip;
	printf("Enter size of list\n");
	scanf_s("%d", &size);
	ip = (int*)malloc(sizeof(int)*size);
	printf("Enter %d numbers\n", size);
	for (i = 0; i<size; i++) {
		scanf_s("%d", &ip[i]);
	}
	printf("The numbers in the list are\n");
	for (i = 0; i<size; i++) {
		printf("%d ", ip[i]);
	}
	printf("\nEnter new size of list\n");
	scanf_s("%d", &new_size);
	nip = (int*)realloc(ip, sizeof(int)*new_size);
	//free(ip);
	printf("Enter %d numbers\n", new_size - size);
	for (i = size; i<new_size; i++) {
		scanf_s("%d", &nip[i]);
	}
	printf("The numbers in the list are\n");
	for (i = 0; i<new_size; i++) {
		printf("%d ", nip[i]);
	}
	free(nip);
}
