#include <bits/stdc++.h>
using namespace std;

int numRookCaptures(vector<vector<char>>& board) {
    int x = -1, y = -1;
    int shots = 0;

    // Find the position of the rook
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] == 'R') {
                x = i;
                y = j;
                break;
            }
        }
    }

    // Check right
    for (int j = y + 1; j < 8; j++) {
        if (board[x][j] == 'B') break;
        if (board[x][j] == 'p') {
            shots++;
            break;
        }
    }

    // Check left
    for (int j = y - 1; j >= 0; j--) {
        if (board[x][j] == 'B') break;
        if (board[x][j] == 'p') {
            shots++;
            break;
        }
    }

    // Check down
    for (int i = x + 1; i < 8; i++) {
        if (board[i][y] == 'B') break;
        if (board[i][y] == 'p') {
            shots++;
            break;
        }
    }

    // Check up
    for (int i = x - 1; i >= 0; i--) {
        if (board[i][y] == 'B') break;
        if (board[i][y] == 'p') {
            shots++;
            break;
        }
    }

    return shots;
}

int main() {
    vector<vector<char>> board(8, vector<char>(8));

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> board[i][j];
        }
    }

    cout << numRookCaptures(board);
    return 0;
}
