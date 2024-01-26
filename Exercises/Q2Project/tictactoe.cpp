#include <iostream>
#include <ncurses.h>

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

void PrintBoard() {
    clear(); 
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printw("%c ", board[i][j]);
        }
        printw("\n");
    }
    refresh(); 
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

bool checkWin(char player) {

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

void clearTerminal() {
    system("clear"); 
}

int main() {
    initscr();
    keypad(stdscr, TRUE); 

    char currentPlayer = 'X';
    int row, col;

    while (true) {
        PrintBoard();

        printw("Player %c's turn. Enter row and clm with space in between:): ", currentPlayer);
        refresh();

        scanw("%d %d", &row, &col);

        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == ' ') {
            board[row - 1][col - 1] = currentPlayer;

            if (checkWin(currentPlayer)) {
                printw("Player %c wins!\n", currentPlayer);
                break;
            } else if (BoardFull()) {
                printw("It's a tie!\n");
                break;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            printw("Invalid move. Try again.\n");
        }

        refresh();
        clearTerminal(); 
    }
    getch();
    endwin();
    return 0;
}


