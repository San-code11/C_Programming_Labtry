#include<stdio.h>

int main() //sum of first 100 natual numbers.
{
	
	int n=100;
	int i=1;
	int sum=0;
	while(i<=n) {
		sum=sum+i;
		i++;
	}
	
	printf("sum of first 100 natural nos = %d", sum);
	return 0;	
}