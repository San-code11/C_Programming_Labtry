#include<stdio.h>
//first condition to see a loop runs is intialization.
//sum of first N natural numbers.
int main() 
{
	int N, count , sum ;
	scanf("%d", &N);
	
	sum=0;
	count=1;
	while(count<=N) {
		sum=sum+count;
		count++;
	}
	
	printf("sum=%d", sum);
	return 0;
}