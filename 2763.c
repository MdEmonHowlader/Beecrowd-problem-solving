#include <stdio.h>
#include <string.h>

#define MAX_N 100

char board[3][MAX_N + 1]; // +1 for null terminator

int count_blocks(int i, int j) {
    int count = 0;
    for (int r = i; r <= i + 1; r++) {
        for (int c = j; c <= j + 1; c++) {
            if (board[r][c] == 'X') {
                count++;
            }
        }
    }
    return count;
}

int can_color(int i, int j) {
    for (int r = i; r <= i + 1; r++) {
        for (int c = j; c <= j + 1; c++) {
            if (board[r][c] == 'X') {
                return 0; // can't color, there's a damaged block
            }
        }
    }
    return 1; // can color
}

int can_win(int i, int j) {
    if (!can_color(i, j)) {
        return 0; // can't color, already damaged
    }
    // try coloring this 2x2 section and see if the other player can't color any more
    char tmp[3][MAX_N + 1];
    memcpy(tmp, board, sizeof(board));
    for (int r = i; r <= i + 1; r++) {
        for (int c = j; c <= j + 1; c++) {
            tmp[r][c] = 'X'; // color this block
        }
    }
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < strlen(board[0]) - 1; c++) {
            if (can_color(r, c)) {
                if (!can_win(r, c)) {
                    return 1; // other player can't win, so we can win
                }
            }
        }
    }
    return 0; // can't win from this position
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        for (int i = 0; i < 3; i++) {
            scanf("%s", board[i]);
        }
        int jhinuk_can_win = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < strlen(board[0]) - 1; j++) {
                if (can_color(i, j)) {
                    if (can_win(i, j)) {
                        jhinuk_can_win = 1;
                        break;
                    }
                }
            }
            if (jhinuk_can_win) {
                break;
            }
        }
        printf("Case %d: %s\n", t, jhinuk_can_win ? "Jhinuk" : "Grandma");
    }
    return 0;
}
