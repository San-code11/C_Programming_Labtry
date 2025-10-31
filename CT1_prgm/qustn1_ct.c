#include<stdio.h>

int main() {
	int a=5 , b=2;
	// for the first part we are dividing two integers. so the result, 
	//although type float also gives 2 , since the decimal is truncated. hence answer is 2.0.
	//but the cast (float) makes 'a' a float, so now we are doing 5.0/2 , so we get 2.5 here.
	// note- wen use '%.2f' , only when printing float to define no of decimals to print. 
	//do not use it when asking the user i.e. scanf
	
	
	
	float c = a / b;
	float d = (float)a/b;
	printf("%.2f %.2f", c, d);
	
	return 0;
	
}