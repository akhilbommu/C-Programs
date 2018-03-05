/* 'USE OF NULL CHARACTER IN STRING'
#include<stdio.h>
#include<string.h>
int main() {
	char C[6];         // so here size should be more than 5 to print correct string
	C[0] = 'A';        //if size is 4 garbage values will print at end of string
	C[1] = 'K';
	C[2] = 'H';
	C[3] = 'I';
	C[4] = 'L';
	C[5] = '\0';
	printf("%s", C); // at the end after JOHN some garbage value is printed in order to avoid that garbage
	printf("\n%d", strlen(C));  // to use strlen function string.h library should be included
	return 0;        //there should be null character at the end of string
	                // and size of array should be length of array + 1 or more 
}                  // 'strlen' counts length upto null character 

*/
/* 'STRING INITIALIZATION AS STRING LITERALS'

#include<stdio.h>
#include<string.h>
int main() {
	char C[] = "AKHIL"; //If we dont mention size of array  it will length of string + 1
					   //This way of initialising string is called STRING LITERALS
		              //No need of null character if we initialise string it automatically stores in memory with null character at its end
	printf("Size in bytes = %d\n", sizeof(C)); // size is 6 bcoz null character is counted
	printf("Length = %d\n", strlen(C)); //length is 5 ,null character is not counted in length
	printf("%s", C); // AKHIL
}
*/
/*
#include<stdio.h>
#include<string.h>
int main() {
	char C[6] = { 'A','K','H','I','L','\0' }; //strings are initialised as comma separated lists and null character should be given explicitly to array as string
	printf("Size in bytes = %d\n", sizeof(C)); // size is 6 bcoz null character is counted
	printf("Length = %d\n", strlen(C)); //length is 5 ,null character is not counted in length
	printf("%s", C); // AKHIL
}
*/

//Arrays and pointers are different types that are used in same manner
//Arrays and pointers are two sides of same coin
 
/*
#include<stdio.h>
#include<string.h>
void main() {
	char C1[6] = "Hello";
	char *C2;
	C2 = C1; // returns the address of first element in array
	printf("%c\n",C2[1]); // e
	C2[0] = 'A';
	while (*C2 != '\0') {
		printf("%c", *C2); //Aello
		//we can not increment or decrement C1 we can do it for C2 bcoz it is pointer variable
		C2++; // C2 now points to next element
	}  //C2[i] = *(C2 + i) 
}
*/

/*
Arrays are always passed to function by reference
When we pass arrays to functions we only pass base address of array as pointer variable.
We do not pass a whole copy of array.
The compiler does not let us to do that
*/

/*'CALLING A FUNCTION WITH POINTER VARIABLE'
#include<stdio.h>
void print(char *c) {  //print function does not know that this character array is of size 20.
	int i = 0;         //It only knows the base address 
	//
	// while (c[i] != '\0') {  //c[i] = (*(c+i))  
	//	 printf("%c", c[i]);
	//	 i++;
	// }
    //
	while (*c != '\0') {
		printf("%c", *c);
		c++; //incrementing the value of address
	}
	printf("\n");
}
int main() {
	char c[20] = "Hello";
	print(c);
}
*/

/*
char *c = "Hello";
If we initialise string in this way String gets stored as compile time constant 
We can not modify string if we initialsie string to character pointer

void print(const char *c) {
	c[0]='A';
	  '
	  '
	  '
}
	  This will give an compilation error.This wont work.
	  We can only read the string whatever is there but we cannot modify it if we use'const'

void print(char *c){
	c[0] = 'A';
	c[1] = 'K';
	  '
	  '
	  '
	printf("%c",c); //Output will be as expected : AKHIL 
}
*/

#include<stdio.h>
int main() {
	int	A[5] = { 2,4,6,8,10 };
	int *P = A;
	printf("P = %d\n", P);  // 200
	printf("*P = %d\n", *P);  // 2
	printf("P+2 = %d\n", P+2);  // 208
	printf("*(P+2) = %d\n", *(P+2)); //6
} 