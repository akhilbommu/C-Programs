#include<stdio.h>
bool isExists(int arr[], int size, int input) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == input) {
			return true;
		}
	}
	return false;
}
int findDouble(int arr[], int size, int input) {
	if (input == 0) {
		return 0;
	}
	if (isExists(arr, size, input)) {
		findDouble(arr, size, input * 2);		
	}
	else {
		return input;
	}
}
/*
int findDouble_CK(int arr[], int size, int input) {
	if (input == 0)
		return -1;
	for (int i = 0; i < size; i++) {
			if (input == arr[i]) {
				return input * 2;
		}
	}	
	return -1;
}
*/

int main() {
	int i,size, arr[30], ele,output,prev_output ;
	printf("Enter size of array\n");
	scanf_s("%d", &size);
	printf("Enter elements\n");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("Enter element to search for its doubles :");
	scanf_s("%d", &ele);
	printf("Double is %d\n", findDouble(arr, size, ele));

	/*
	output = findDouble_CK(arr, size, ele);
	prev_output = output;
	while (output !=-1)
	{
		prev_output = output;
		output = findDouble_CK(arr, size, output);		
	}
	printf("\noutput is %d", prev_output);
	return prev_output;
	*/
}
