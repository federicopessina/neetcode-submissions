#include <vector>
#include <unordered_set>

class Solution {
    using TypeBoard = std::vector<std::vector<char>>;

public:
    bool isValidSudoku(const TypeBoard& board) {
        return isRowOk(board) &&
               isColOk(board) &&
               isBoxOk(board);
    }

private:
    bool isRowOk(const TypeBoard& board) {
        for (const auto& row : board) {
            std::unordered_set<char> seen;

            for (char cell : row) {
                if (cell == '.') continue;

                if (seen.contains(cell))
                    return false;

                seen.insert(cell);
            }
        }

        return true;
    }

    bool isColOk(const TypeBoard& board) {
        for (int col = 0; col < 9; ++col) {
            std::unordered_set<char> seen;

            for (int row = 0; row < 9; ++row) {
                char cell = board[row][col];

                if (cell == '.') continue;

                if (seen.contains(cell))
                    return false;

                seen.insert(cell);
            }
        }

        return true;
    }

    bool isBoxOk(const TypeBoard& board) {
        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxCol = 0; boxCol < 9; boxCol += 3) {
                std::unordered_set<char> seen;

                for (int row = boxRow; row < boxRow + 3; ++row) {
                    for (int col = boxCol; col < boxCol + 3; ++col) {
                        char cell = board[row][col];

                        if (cell == '.') continue;

                        if (seen.contains(cell))
                            return false;

                        seen.insert(cell);
                    }
                }
            }
        }

        return true;
    }
};