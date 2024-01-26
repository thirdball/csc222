#include <iostream>
#include <ncurses.h>
#include <stdlib.h>

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

void PrintBoard() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printw("%c ", board[i][j]);
        }
        printw("\n");
    }
}

bool BoardFull() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool CheckWin(char player) {
    
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

int main() {
    initscr(); 
    keypad(stdscr, TRUE); 

    char CurrentPlayer = 'X';
    int row, col;

    while (true) {
        PrintBoard();

        printw("Player %c's turn. Enter row and column with a space in between: ", CurrentPlayer);
        refresh();

        scanw("%d %d", &row, &col);

        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == ' ') {
            board[row - 1][col - 1] = CurrentPlayer;

            if (CheckWin(CurrentPlayer)) {
                printw("Player %c wins! :)\n", CurrentPlayer);
                break;
            } else if (BoardFull()) {
                printw("It's a tie!\n");
                break;
            }

            CurrentPlayer = (CurrentPlayer == 'X') ? 'O' : 'X';
        } else {
            printw("Invalid move. Try again.\n");
        }

       int count = 1;
        if (count % 1 == 0){
        system("clear");
        }

        refresh();
    }
    getch();

    endwin();
    return 0;
}

