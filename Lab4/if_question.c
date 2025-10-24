#include<stdio.h>

int main() {
	

	int a = 2;
	int b = 5;
	// for a++ , first value is assigned thenm updated.
	// while the value of a is updated to 3, it will not be printed in this operation.
	// for ++b, first increment then assign.
	
	
	
	
	 if( a==2 && b==5) {
	 	printf("k + %d \n",a++);
	 	printf("k + %d", ++b);
	 } 
	
	return 0;
}