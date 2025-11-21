#include<stdio.h>

int main() {
	
	char letter;
	for(letter = 'A' ; letter<='Z' ; letter++) {
		switch(letter) {
			case 'A':
				printf("%c is a vowel \n", letter);
				break;
			case 'E':
				printf("%c is a vowel \n", letter);
				break;
			case 'I':
				printf("%c is a vowel \n", letter);
				break;
			case 'O':
				printf("%c is a vowel \n", letter);
				break;
			case 'U':
				printf("%c is a vowel \n", letter);
				break;
			default:
				printf("%c is a consonent \n" , letter);
				break;
								
		}
		
	}
	printf("above are all the alphabets");
	return 0;
}