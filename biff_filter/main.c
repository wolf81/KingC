#include <stdio.h>
#include <ctype.h>

#define TEXT_LENGHT 100

int main (int argc, const char * argv[]) {	
	char chars[TEXT_LENGHT] = {0};
	
	printf("Enter message: ");
	
	int i = 0;
	char c;
	while ((c = getchar()) != '\n') {		
		chars[i] = toupper(c);
		i++;
	}
	
	for (int j = 0; j < TEXT_LENGHT; j++) {
		c = chars[j];
		
		if (c == 'A') chars[j] = '4';
		else if (c == 'B') chars[j] = '8';
		else if (c == 'E') chars[j] = '3';
		else if (c == 'O') chars[j] = '0';
		else if (c == 'S') chars[j] = '5';
		
		printf("%c", chars[j]);
	}
	
	for (int j = 0; j < 10; j++) {
		printf("!");
	}
	
    return 0;
}
