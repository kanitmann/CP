// https://takeuforward.org/data-structure/set-matrix-zero/

// https://leetcode.com/problems/set-matrix-zeroes/

// Set Matrix Zero
// Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

// Examples:

// Examples 1:
// Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.

// Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

// Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

// Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0

#include <bits/stdc++.h>

using namespace std;

void setZeroes(vector<vector<int>> &matrix);

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {0, 1, 0}, {1, 1, 1}};
    setZeroes(matrix);
}

void setZeroes(vector<vector<int>> &matrix)
{
    vector<vector<int>> mat2 = matrix;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < matrix.size(); k++)
                    mat2[k][j] = 0;
                for (int k = 0; k < matrix[0].size(); k++)
                    mat2[i][k] = 0;
            }
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
            cout << mat2[i][j] << " ";
    }
}