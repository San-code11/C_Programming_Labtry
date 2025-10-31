#include<stdio.h>

int main() {
	
	char d;
	printf("Enter your choice : \n");
	scanf("%c" , &d);
	
	
	// the switch statement , after finding the first matching case, continues to execute till it finds the break statement.
	// if no break statement is found, fall through occurs.
	// it means executing consequent statement till break is encoundered.
	// the position of default is no matter. the switch operates on matching cases.
	// if no case is matched it goes to default.
	
	
	switch(d) {
		
		case 'a':
		case 'A':
		printf("Aston Martin");
		break;
		
		
		default:
			printf("Ford vs");
			
		case 'f':
		case 'F':
		printf("Ferrari \n");
		
		case 'L':
		case 'l':
		printf("Lamborgini");
		
		
	}
	
	return 0;
	
}
		

		
			
	
