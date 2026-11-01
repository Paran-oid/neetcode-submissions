#define SQUARE_IDX(row, col)(((row) / 3) * 3 + ((col) / 3))

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9] = {0};
        int cols[9] = {0};
        int squares[9] = {0};
        for(size_t r = 0; r < 9; r++)
        {
            for(size_t c = 0; c < 9; c++)
            {
                if(board[r][c] == '.') continue;

                int val = board[r][c] - '1';    // wir wollen diese Wert zwischen 0 und 8

                if((rows[r] & (1 << val)) || (cols[c] & (1 << val)) || (squares[SQUARE_IDX(r, c)] & (1 << val)))
                    return false;

                rows[r] |= (1 << val);
                cols[c] |= (1 << val);
                squares[SQUARE_IDX(r, c)] |= (1 << val);
            }
        }
        return true;
    }
};
