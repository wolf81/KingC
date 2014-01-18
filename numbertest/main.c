#include <stdio.h>

int main (int argc, const char * argv[]) {
	float value = 0.0, maxvalue = 0.0;
	
	do {
		printf("Enter a number: ");
		scanf("%f", &value);
		
		if (value > maxvalue) {
			maxvalue = value;
		}
	} while (value != 0.0);
	
	printf("The largest number entered was %.2f", maxvalue);
	
	return 0;
}
