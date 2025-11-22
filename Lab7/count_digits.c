#include<stdio.h> 

int main() {
	
	int i; 
	int n=0;
	int orgn;
	printf("Enter your number \n");
	scanf("%d" , &i);
	orgn = i;
	if (orgn == 0) {
		printf("Number of digits =1");
	} else {
		while (orgn != 0) {
		n++;
		orgn=orgn/10;
        }
	    printf("Number of digits =%d" , n);
      	
	}
	return 0;
}
