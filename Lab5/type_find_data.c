#include<stdio.h>

int main() {
	
	char letter;
	int type;
	
	printf("Enter a letter , character, number or symbol");
	scanf("%c" , &letter);
	type = letter;
	
	if ( letter >= 65 && letter <=90) {
		
		printf("given input is upper case");
	} else if(letter >= 97 && letter <=122) {
		
		printf("given input is lower class");
	} else if(letter >= 48 && letter <=57) {
		
		printf("given input is a number");
	} else {
		printf("given input special symbol");
	}
	
	return 0;
	
	
}