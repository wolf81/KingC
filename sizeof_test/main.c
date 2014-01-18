#include <stdio.h>

int main (int argc, const char * argv[]) {
	int i;
	short s;
	long l;
	float f;
	double d;
	long double ld;
	
	printf("int: %zu\n", sizeof(i));
	printf("short: %zu\n", sizeof(s));
	printf("long: %zu\n", sizeof(l));
	printf("float: %zu\n", sizeof(f));
	printf("double: %zu\n", sizeof(d));
	printf("long double: %zu\n", sizeof(ld));

	
    return 0;
}
