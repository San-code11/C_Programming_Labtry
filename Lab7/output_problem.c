#include<stdio.h>

int main() {              //the while loop-the guard at the gate.
                          //it checks the condition before running the loop.
	float j = 1.0 , i = 2.0 ;
	int n =0;
	while(i/j > 0.05) {
		j+=j;      //j=j+j;
		n++;
	}
	printf("n = %d , j =%f \n" , n,j);
	return 0;
}

//analysis
//--------------------------------
//1. i/j = 2/1 , n=1
//2. i/j = 2/2, n=2
//3. i/j = 2/4 , n=3
//4. i/j = 2/8 , n=4
//5. i/j = 2/16 , n=5
//6. i/j = 2/32 , n=6
//7. i/j = 2/64 false. 
//----------------------------------
//answer - j= 64.000000 , n=6.
