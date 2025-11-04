#include<stdio.h>

int main()
{
	
	int n;
	int first = 0;
	int second = 1;
	int next;
	printf("Enter the number of terms");
	scanf("%d" , &n);
	
	if (n <= 0) {
		printf("There cannot be negative or zero number of terms ");
	} else  {
		
		printf("Fibonacci series \n");
		printf("----------------------------- \n");
		
		for (int i =0; i < n ; i++) {
			
			if( i <= 1) {
				next = i;
			} else {
				
				next = first + second;
				first = second;
				second = next;
			}
			printf("%d ", next);
		}
		
	
	}
		
	return 0; 
	 
	
	
	
	
	
	
	
}