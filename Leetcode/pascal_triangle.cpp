// https://leetcode.com/problems/pascals-triangle/

// Easy

// Problem Statement: Given an integer N, return the first N rows of Pascal’s triangle.

// In Pascal’s triangle, each number is the sum of the two numbers directly above it

// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
// Example 2:

// Input: numRows = 1
// Output: [[1]]

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows);

int main()
{
    vector<vector<int>> generate(5);
    return 0;
}

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> pasc_tri(numRows);
    for (int i = 0; i < numRows; i++)
    {
        pasc_tri[i].resize(i + 1);
        pasc_tri[i][0] = pasc_tri[i][i] = 1;
        for (int j = 1; j < i; j++)
            pasc_tri[i][j] = pasc_tri[i - 1][j - 1] + pasc_tri[i - 1][j];
    }

    return pasc_tri;
}