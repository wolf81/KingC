#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define	bool int

int roll_dice (void);
bool play_game (void);

int main (int argc, const char * argv[]) {
    // insert code here...
	srand((unsigned)time(NULL));
	
	int win = 0, loss = 0;
	
	char c;
	do {
		if (play_game() == 1) {
			win += 1;
		} else {
			loss += 1;
		}
		
		printf("Play again? ");
		scanf(" %c ", &c);
		printf("c: %c\n", c);
	} while (c == 'y');
	
	
	printf("\nWins: %d\tLosses: %d", win, loss);
	
    return 0;
}

int roll_dice (void) {
	int roll1 = rand() % 6 + 1;
	int roll2 = rand() % 6 + 1;
	
	return roll1 + roll2;
}

bool play_game (void) {
	//	bool winner = FALSE;
	
	int point = 0;
	for (int i = 0; ; i++) {
		int dice = roll_dice();
		
		printf("You rolled: %d\n", dice);
		
		if (i == 0) {
			if (dice == 7 || dice == 12) {
				printf("You win!\n");
				return 1;
			}
			else {
				point = dice;
				printf("Your point is: %d\n", point);
			}
		} else {
			if (dice == 7) {
				printf("You lose!\n");
				return 0;
			}
			else if (dice == point) {
				printf("You win!\n");
				return 1;
			}
		}
	}
	
	return 0;
}