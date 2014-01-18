#include <stdio.h>

void sort(int n, int array[n]);

int main (int argc, const char * argv[]) {
	int n;
	
    printf("How many integers do you want to sort? ");
	scanf("%d", &n);

	int array[n];
	for (int i = 0; i < n; i++) {
		printf("Enter integer: ");
		scanf("%d", &array[i]); 
	}
	
	sort(n, array);
	
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	
    return 0;
}

void sort(int n, int array[n]) {
	int pos = 0;
	
	for (int i = 0; i < n; i++) {
		if (array[pos] < array[i]) {
			pos	= i;
		}
	}
	
	int num = array[(n - 1)];
	array[(n - 1)] = array[pos];
	array[pos] = num;
	
	if (n > 2) {
		sort((n - 1), array);		
	}
}
