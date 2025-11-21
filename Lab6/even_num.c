#include<stdio.h>

int main() {
	
	int n=100;
	int i=1;
	int first = 2;
	
	while(first<=99) {
		if(first % 2==0) {
			printf("even number = %d \n"  , first);
		}
		first++;
	}
	printf("above are all the even nos btw 1 and 100");
	return 0;
	
	
}


