# include <stdio.h>

void main() {

	int a, max_len, first_line_space;
	char b;
	
	printf("Enter the value of A: ");
	scanf("%d", &a);
	printf("\nEnter the value of B: ");
	scanf(" %c", &b);
	
	first_line_space = a - 1;
	
	for(int i = 1; i < a+1; i++){
		
		for(int j = 0; j < first_line_space; j++) printf(" ");
		
		for(int k = 1; k < i+1; k++) printf("%c ", b);
		
		printf("\n");
		first_line_space--;
	}
	
	first_line_space = 1;
	
	for (int i = a; i > 1; i--){
	
		for(int j = 0; j < first_line_space; j++) printf(" ");
		
		for(int k = i; k > 1; k--) printf("%c ", b);
		
		printf("\n");
		first_line_space++;
	}
}