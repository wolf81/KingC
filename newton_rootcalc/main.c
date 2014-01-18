#include <stdio.h>
#include <math.h>

int main (int argc, const char * argv[]) {
	double x, y, xdiv, avg = 1.0;
	
	printf("Enter a positive number: ");
	scanf("%lf", &x);
	
	printf("\nx\t\t\ty\t\t\tx/y\t\t\tavg\n");
	do {
		y = avg;
		xdiv = x / y;
		avg = (y + xdiv) / 2;
		printf("%.5f\t%.5f\t%.5f\t%.5f\n", x, y, xdiv, avg);
	} while (fabs(avg - y) > 0.00001 * y);
	
	
    return 0;
}
