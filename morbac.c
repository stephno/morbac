/*
 *--------------------------------------------------------------
 * Name		:	Morbac (v.1.0)
 * Purpose	:	Simple 2 player commande line tic-tac-toe game.
 *
 * Author	:	Steph. N.
 * Created	:	2016, Nov. 18th
 * Licence	:	GNU GPL (v.3). See LICENCE for details.
 *--------------------------------------------------------------
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ncurses.h>
#include <unistd.h>

int main () {

	//-------------------------
	// Structures & variables  |
	//-------------------------
	bool winner = false;
	int i,
		j,
		score,
		choice,
		prevChoice;
	int pNum = 1,
		turnNum = 0,
		thiefOrIdiot;

	int grid[3][3];						// Initializing the score’s array.
		for(i = 0; i <= 2 ; i++) {		// Default value > 6 so that it won’t skew
			for(j = 0; j <= 2; j++){	// the calculation results. (If taking 0
				grid[i][j] = 7;			// as def. val., could result in, for example:
			};							// | 1 | 2 | 0 | ==> = 3, P1 would win.)
		};

	struct results {
			int line;
			int col;
			int diag;
		}rslt[3];


	//-----------------------------------
	// Some graphics, if we may say so  |
	//-----------------------------------

	// Initializing the window.
	initscr();
	curs_set(1);

	// Displaying the 3×3 grid.
	mvprintw(0,10, " ----------- ");
	mvprintw(1,10, "|   |   |   |");
	mvprintw(2,10, " ----------- ");
	mvprintw(3,10, "|   |   |   |");
	mvprintw(4,10, " -----------");
	mvprintw(5,10, "|   |   |   |");
	mvprintw(6,10, " -----------");


	//------------------
	// Now Let’s play  |
	//------------------

	// Players take their turn
	// and choose a case to place their mark.
	do{
		
		mvprintw(8,1, "Player %d, this is your turn.", pNum);
		mvprintw(9,1, "Place your mark in case...: ");
			scanw("%d", &choice);


		// Before placing the player’s mark, checking if the case he wants
		// doesn’t already contain something.
		// Displaying an error message if necessary.
		do {
			switch(choice) {
				case 1:
					move(1, 12);
					thiefOrIdiot = grid[0][0];
					prevChoice = choice;

					if (thiefOrIdiot == 7) {
						grid[0][0] = pNum;
					}
					else {
						if(pNum == thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Avast! Don't you see your mark's already there?");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Player %d, Pay a little bit more attention.", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}

						if(pNum != thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Thief! Thief! Trying to steal someone else's precious!");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Sneaky little Player %d!", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}
					}

					break;

				case 2:
					move(1, 16);
					thiefOrIdiot = grid[0][1];
					prevChoice = choice;

					if (thiefOrIdiot == 7) {
						grid[0][1] = pNum;
					}
					else {
						if(pNum == thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Avast! Don't you see your mark's already there?");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Player %d, Pay a little bit more attention.", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}

						if(pNum != thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Thief! Thief! Trying to steal someone else's precious!");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Sneaky little Player %d!", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}
					}

					break;

				case 3:
					move(1, 20);
					thiefOrIdiot = grid[0][2];
					prevChoice = choice;

					if (thiefOrIdiot == 7) {
						grid[0][2] = pNum;
					}
					else {
						if(pNum == thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Avast! Don't you see your mark's already there?");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Player %d, Pay a little bit more attention.", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}

						if(pNum != thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Thief! Thief! Trying to steal someone else's precious!");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Sneaky little Player %d!", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}
					}

					break;

				case 4:
					move(3, 12);
					thiefOrIdiot = grid[1][0];
					prevChoice = choice;

					if (thiefOrIdiot == 7) {
						grid[1][0] = pNum;
					}
					else {
						if(pNum == thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Avast! Don't you see your mark's already there?");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Player %d, Pay a little bit more attention.", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}

						if(pNum != thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Thief! Thief! Trying to steal someone else's precious!");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Sneaky little Player %d!", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}
					}

					break;

				case 5:
					move(3, 16);
					thiefOrIdiot = grid[1][1];
					prevChoice = choice;

					if (thiefOrIdiot == 7) {
						grid[1][1] = pNum;
					}
					else {
						if(pNum == thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Avast! Don't you see your mark's already there?");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Player %d, Pay a little bit more attention.", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}

						if(pNum != thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Thief! Thief! Trying to steal someone else's precious!");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Sneaky little Player %d!", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}
					}

					break;

				case 6:
					move(3, 20);
					thiefOrIdiot = grid[1][2];
					prevChoice = choice;

					if (thiefOrIdiot == 7) {
						grid[1][2] = pNum;
					}
					else {
						if(pNum == thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Avast! Don't you see your mark's already there?");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Player %d, Pay a little bit more attention.", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}

						if(pNum != thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Thief! Thief! Trying to steal someone else's precious!");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Sneaky little Player %d!", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}
					}

					break;

				case 7:
					move(5, 12);
					thiefOrIdiot = grid[2][0];
					prevChoice = choice;

					if (thiefOrIdiot == 7) {
						grid[2][0] = pNum;
					}
					else {
						if(pNum == thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Avast! Don't you see your mark's already there?");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Player %d, Pay a little bit more attention.", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}

						if(pNum != thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Thief! Thief! Trying to steal someone else's precious!");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Sneaky little Player %d!", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}
					}

					break;

				case 8:
					move(5, 16);
					thiefOrIdiot = grid[2][1];
					prevChoice = choice;

					if (thiefOrIdiot == 7) {
						grid[2][1] = pNum;
					}
					else {
						if(pNum == thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Avast! Don't you see your mark's already there?");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Player %d, Pay a little bit more attention.", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}

						if(pNum != thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Thief! Thief! Trying to steal someone else's precious!");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Sneaky little Player %d!", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}
					}

					break;

				case 9:
					move(5, 20);
					thiefOrIdiot = grid[2][2];
					prevChoice = choice;

					if (thiefOrIdiot == 7) {
						grid[2][2] = pNum;
					}
					else {
						if(pNum == thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Avast! Don't you see your mark's already there?");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Player %d, Pay a little bit more attention.", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}

						if(pNum != thiefOrIdiot) {
							while(choice == prevChoice) {
								move(8,1); clrtoeol(); printw("Thief! Thief! Trying to steal someone else's precious!");
								move(9,1); clrtoeol();
								curs_set(0);
								refresh();
								sleep(3);

								move(8,1); clrtoeol(); printw("Sneaky little Player %d!", pNum);
								move(9,1); clrtoeol(); printw("Place your mark in case...: ");
								curs_set(1);
								refresh();
									scanw("%d", &choice);
							}
						}
					}

					break;

				default:	// If the player asks for a case that doesn’t exist.
					move(8,1); clrtoeol(); printw("Nope. You have to choose a case");
					move(9,1); clrtoeol(); printw("which number is included between 1 and 9.");
					curs_set(0);
					refresh();
					sleep(3);

					move(8,1); clrtoeol(); printw("Player %d, this is your turn.", pNum);
					move(9,1); clrtoeol(); printw("Place your mark in case...: ");
					curs_set(1);
					refresh();
						scanw("%d", &choice);

					break;
			};
		}while(thiefOrIdiot != 7);

		// Placing players’ marks.
		if (pNum == 1) {
			printw("X");
			pNum = 2;
		}
		else {
			printw("O");
			pNum = 1;
		} refresh();


		//----------------
		// CALCULATIONS  |
		//----------------
		if (turnNum >= 4) {
			for (i = 0; i <= 2; i++) {
				rslt[i].line = grid[i][0] + grid[i][1] + grid[i][2];
				rslt[i].col = grid[0][i] + grid[1][i] + grid[2][i];
			};

			rslt[0].diag = grid[0][0] + grid[1][1] + grid[2][2];
			rslt[1].diag = grid[2][0] + grid[1][1] + grid[0][2];

			// Checking if there is a line with 3 identical numbers.
			i = 0;

			// First, checking the lines.
			while((winner != true) && (i <= 2)) {
				if ((rslt[i].line == 3) || (rslt[i].line == 6)){
					score = rslt[i].line;
					winner = true;
				}
				else {
					i++;
				}
			}

			// Then, checking the columns.
			i = 0;
			while((winner != true) && (i <= 2)) {
				if ((rslt[i].col == 3) || (rslt[i].col == 6)){
					score = rslt[i].col;
					winner = true;
				}
				else {
					i++;
				}
			}

			// Finally, checking the diagonals.
			i = 0;
			while((winner != true) && (i <= 2)) {
				if ((rslt[i].diag == 3) || (rslt[i].diag == 6)){
					score = rslt[i].diag;
					winner = true;
				}
				else {
					i++;
				}
			}
		}

		turnNum++;
	}while((winner != true) && (turnNum < 9));


	//----------------------
	// DISPLAY OF RESULTS  |
	//----------------------
	if (winner == true) {
		if (score == 3){
			pNum = 1;
		}
		else {
			pNum = 2;
		}

		move(11,1); printw("Congratulations, Player %d!, You won!", pNum);
	}
	else {
		move(11,1); printw("There's no winner...");
	}
	curs_set(0);
	refresh();


	// “Good night everybody!”
	sleep(5);
	endwin();

	return 0;
}