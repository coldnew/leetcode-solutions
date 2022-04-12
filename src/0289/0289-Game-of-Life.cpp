#include <iostream>
#include <vector>

#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  enum Status {
    DiedToDied = 0,
    LiveToLive = 1,
    LiveToDied = 2,
    DiedToLive = 3,
  };

  void gameOfLife(vector<vector<int>>& board) {
    int m = board.size(), n = m ? board[0].size() : 0;
    std::vector<int> dx{-1, 0, 1, -1, 1, -1, 0, 1};
    std::vector<int> dy{-1, -1, -1, 0, 0, 1, 1, 1};

    for (auto i = 0; i < m; i++) {
      for (auto j = 0; j < n; j++) {
        int count = 0;
        for (auto k = 0; k < 8; k++) {
          int x = i + dx[k], y = j + dy[k];
          if (x >= 0 && x < m && y >= 0 && y < n &&
              (board[x][y] == LiveToLive || board[x][y] == LiveToDied))
            count++;
        }
        if (board[i][j] && (count < 2 || count > 3))
          board[i][j] = LiveToDied;
        else if (!board[i][j] && count == 3)
          board[i][j] = DiedToLive;
      }
    }

    updateBoard(board);
  }

  void updateBoard(std::vector<std::vector<int>>& board) {
    for (auto& row : board) {
      for (auto& col : row) {
        switch (col) {
          case DiedToDied:
            col = 0;
            break;
          case LiveToLive:
            col = 1;
            break;
          case LiveToDied:
            col = 0;
            break;
          case DiedToLive:
            col = 1;
            break;
          default:
            throw std::runtime_error("Failed to decode cell status");
        }
      }
    }
  }
};
