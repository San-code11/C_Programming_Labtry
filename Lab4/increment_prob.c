#include<stdio.h>

int main() {
	
	// when many inputs values are given in a variable, it shows only the right most value.
	//if we execute a++,while it will print 2, its updated value becomes 3.
	// first step a++ , a gets assigned 2, and then its value is updated to 3.
	// then for b++, assigned 3, updated to 4.
	// overall output comes 6.
	int a = 2;
	int b = 3;
	int c;
	c = (a++ ,b++,a+b, b++, ++b);
	printf("value %d", c);
	
	return 0;
}