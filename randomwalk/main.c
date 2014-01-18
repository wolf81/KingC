#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int bool;

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main (int argc, const char * argv[]) {
	char board[10][10] = {};
	
	generate_random_walk(board);
	print_array(board);
		
	return 0;
}

void generate_random_walk(char walk[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			walk[i][j] = '.';
		}
	}
	
	srand((unsigned) time(NULL));
	int x = rand() % 10; 
	int y = rand() % 10;
	walk[x][y] = 'A';
	
	for (int i = 1; i < 26; i++) {
		char c = i + 'A';
		bool n = 1, w = 1, s = 1, e = 1;
		
		while (n == 1 || w == 1 || s == 1 || e == 1) {
			int pos = rand() % 4; 
						
			if (pos == 0) {
				if (y - 1 < 0 || walk[x][(y - 1)] != '.') {
					n = 0;
				} else {
					y -= 1;
					walk[x][y] = c;
					break;
				}
			} else if (pos == 1) {
				if (x - 1 < 0 || walk[x - 1][y] != '.') {
					w = 0;
				} else {
					x -= 1;
					walk[x][y] = c;
					break;
				}
			} else  if (pos == 2) {
				if (y + 1 > 9 || walk[x][y + 1] != '.') {
					s = 0;
				} else {
					y += 1;
					walk[x][y] = c;
					break;
				}
			} else if (pos == 3) {
				if (x + 1 > 9 || walk[x + 1][y] != '.') {
					e = 0;
				} else {
					x += 1;
					walk[x][y] = c;
					break;
				}
			}			
		}
	}
}

void print_array(char walk[10][10]) {
	char c;
	
	for (int i = 0; i < 10; i++) {		
		for (int j = 0; j < 10; j++) {
			c = (char)walk[i][j];
			printf("%c ", c);
		}
		
		printf("\n");
	}	
}

