#include <stdio.h>

int main (int argc, const char * argv[]) {
	int days = 0, start = 0;
	
	printf("Enter number of days in month: ");
	scanf("%d", &days);
	
	printf("Enter starting day of the week (1 = Sun, 7 = Say): ");
	scanf("%d", &start);
	
	for (int i = 0; i <= (days + start); i++) {
		if (i <= start) {
			printf(" \t");
		} else {
			printf("%d\t", i - start);			
		}
		
		if (i % 7 == 0) {
			printf("\n");
		}
	}
    
	return 0;
}
