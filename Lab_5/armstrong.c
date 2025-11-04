#include<stdio.h>

int main() {
	
	int num;
	int original;
	int pow = 0;
	int n=0;   //initialise n, set it to zero.
	int expo;
	int store;
	 // int indv=1;  initialize if you are going to multiply. but do it inside the loop , otherwise it wont reset.
	
	printf("Pls enter a number");
	scanf("%d" , &num);
	
	original = num;
	while (original != 0) {
		
		original = original / 10;
		n=n+1;
	}
	
	original = num;
	while( original !=0) {
		
		store= original % 10;
		int indv=1;
		
		for( expo=1 ; expo <= n; expo++) {  // no need of colon as it is already defined.
			indv = indv * store;
			
		} pow= pow + indv;
		  original= original /10;
		  
		  //A for loop has three parts, separated by semicolons (;), not commas:
		  //for (initialization; condition; increment)

	
	}
	
	if(pow==num) {
		printf("Armstrong");
	} else {
		printf("No armstrong");
	}
	
	return 0;
}