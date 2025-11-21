#include<stdio.h>


int main() 


{
	int N, count , sum ;
	scanf("%d", &N);
	
	sum=0;
	
	for(count=1;count<=N;count++) {
		sum=sum+count;
	
	}
	
	printf("sum=%d", sum);
	return 0;
}