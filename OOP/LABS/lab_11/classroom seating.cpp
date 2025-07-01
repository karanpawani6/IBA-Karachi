#include <iostream>
#include <vector>
using namespace std;

int countingArrangements(vector<vector<int>>& grid, int N, int K, int count, int row, int col) {
    if (K == 0) {
        return 1;
    }
    if (row >= N) {
        return 0;
    }
    int nextRow = (col + 1 == N) ? row + 1 : row;
    int nextCol = (col + 1) % N;
    int ways = 0;
    if (grid[row][col] == 0) {
        bool canPlace = true;
        if (row > 0 && grid[row - 1][col] == 1) canPlace = false;
        if (col > 0 && grid[row][col - 1] == 1) canPlace = false;
        if (row < N - 1 && grid[row + 1][col] == 1) canPlace = false;
        if (col < N - 1 && grid[row][col + 1] == 1) canPlace = false;

        if (canPlace) {
            grid[row][col] = 1;
            ways += countingArrangements(grid, N, K - 1, count, nextRow, nextCol);
            grid[row][col] = 0;
        }
    }
    ways += countingArrangements(grid, N, K, count, nextRow, nextCol);

    return ways;
}

int main() {
    int N = 3, K = 2;
    vector<vector<int>> grid(N, vector<int>(N, 0));
    cout << "Total arrangements: " << countingArrangements(grid, N, K, 0, 0, 0) << endl;
    return 0;
}