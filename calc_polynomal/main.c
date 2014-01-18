#include <stdio.h>

int calc_polynomal(int x);
int power(int x, int power);

int main (int argc, const char * argv[]) {
	int x, y;
	
	printf("Enter value for x: ");
	scanf("%d", &x);

	y = calc_polynomal(x);
	printf("y: %d", y);
	
    return 0;
}

int calc_polynomal(int x) {
	return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * x - 6;
}

int power(int x, int p) {
	if (p > 1) {
		x *= power(x, (p - 1));	
	}
	
	return x;
}
