#include<stdio.h>

int main() {
	int a=2, b=5, k=6;
	
	// ternary operator
	// it checks all the conditions . hence we have 5 outputs.
	// each line is checked. if true the first part is executed. if false the second part is executed.
	
	(a==2 && b!=5) ? printf("k + %d\n" , ++k) : printf("k + %d \n" , k++); 
	(a==2 || b!=5) ? printf("k + %d\n" , ++k) : printf("k + %d \n" , k++); 
	(a==0 && b==5) ? printf("k + %d\n" , ++k) : printf("k + %d \n" , k++); 
	(a==5 && b!=5) ? printf("k + %d\n" , ++k) : printf("k + %d \n" , k++); 
	printf("k + %d\n" , k);
	
	return 0;
	
	
}