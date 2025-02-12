#include <iostream>
#include <vector>
using namespace std;

// A utility function to print solution
void printSolution(const vector<vector<int>> &board)
{
    int N = board.size();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            if (board[i][j])
                cout << "Q ";
            else
                cout << ". ";
        cout << "\n";
    }
}

// A utility function to check if a queen can
// be placed on board[row][col].
bool isSafe(const vector<vector<int>> &board, int row, int col)
{
    int N = board.size();

    // Check this row on left side
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on left side
    for (int i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

// A recursive utility function to solve N Queen problem
bool solveNQUtil(vector<vector<int>> &board, int col)
{
    int N = board.size();

    // base case: If all queens are placed
    // then return true
    if (col >= N)
        return true;

    // Consider this column and try placing
    // this queen in all rows one by one
    for (int i = 0; i < N; i++)
    {
        // Check if the queen can be placed on
        // board[i][col]
        if (isSafe(board, i, col))
        {
            // Place this queen in board[i][col]
            board[i][col] = 1;

            // recur to place rest of the queens
            if (solveNQUtil(board, col + 1))
                return true;

            // If placing queen in board[i][col]
            // doesn't lead to a solution, then
            // remove queen from board[i][col]
            board[i][col] = 0; // BACKTRACK
        }
    }

    // If the queen cannot be placed in any row in
    // this column col then return false
    return false;
}

// This function solves the N Queen problem using
// Backtracking. It mainly uses solveNQUtil() to
// solve the problem. It returns false if queens
// cannot be placed, otherwise, returns true and
// prints placement of queens in the form of 1s.
bool solveNQ(int N)
{
    vector<vector<int>> board(N, vector<int>(N, 0));

    if (solveNQUtil(board, 0) == false)
    {
        cout << "Solution does not exist";
        return false;
    }

    printSolution(board);
    return true;
}

// Driver program to test above function
int main()
{
    int N = 6; // Change N to any size of the board
    solveNQ(N);
    return 0;
}
