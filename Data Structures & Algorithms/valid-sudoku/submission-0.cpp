class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // checking individual rows
        for (int i = 0; i < 9; i++) {
            set<char> seen;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (seen.find(board[i][j]) != seen.end()) {
                    return false;
                } else {
                    seen.insert(board[i][j]);
                }
            }
        }
        // checking individual columns
        for (int i = 0; i < 9; i++) {
            set<char> seen;

            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') {
                    continue;
                }

                if (seen.find(board[j][i]) != seen.end()) {
                    return false;
                } else {
                    seen.insert(board[j][i]);
                }
            }
        }

        // checking 3X3 squares

        for (int boxRow = 0; boxRow < 3; boxRow++) {
            for (int boxCol = 0; boxCol < 3; boxCol++) {
                set<char> seen;

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        int row = boxRow * 3 + i;
                        int col = boxCol * 3 + j;

                        if (board[row][col] == '.') {
                            continue;
                        }

                        if (seen.find(board[row][col]) != seen.end()) {
                            return false;
                        }

                        seen.insert(board[row][col]);
                    }
                }
            }
        }
        return true;
    }
};
