#include<stdio.h>

int main() {
	
	int n;
	int j;
	int i=1;
	float sum=0;
	printf("Enter how many entries you want \n");
	scanf("%d" , &n);
	while(i<=n) {
		printf("enter your number");
		scanf("%d" , &j);
		i++;
		sum=sum+j;
	}
	printf("sum of all numbers = %.2f \n" , sum );
	printf("average of given numbers = %.2f" , sum/n);
	
	return 0;
	
}