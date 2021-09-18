/*

Rabin-Karp algorithm for Pattern Searching in Matrix

    Difficulty Level : Hard
    Last Updated : 06 Aug, 2021

Given matrices txt[][] of dimensions m1 x m2 and pattern pat[][] of dimensions n1 x n2, the task is to check whether a pattern exists in the matrix or not, and if yes then print the top most indices of the pat[][] in txt[][]. It is assumed that m1, m2 ≥ n1, n2

Examples: 

Input:
txt[][] = {{G, H, I, P}
           {J, K, L, Q}
           {R, G, H, I}  
           {S, J, K, L}
          }
pat[][] = {{G, H, I},
           {J, K, L}
          }
Output:
Pattern found at ( 0, 0 )
Pattern found at ( 2, 1 )
Explanation:


Input:
txt[][] = { {A, B, C},
            {D, E, F},
            {G, H, I}
          }
pat[][] = { {E, F},
            {H, I}
          }
Output:
Pattern found at (1, 1)

Recommended: Please try your approach on {IDE} first, before moving on to the solution.

Approach: In order to find a pattern in a 2-D array using Rabin-Karp algorithm, consider an input matrix txt[m1][m2] and a pattern pat[n1][n2]. The idea is to find the hash of each columns of mat[][] and pat[][] and compare the hash values. For any column if hash values are equals than check for the corresponding rows values. Below are the steps:

    Find the hash values of each column for the first N1 rows in both txt[][] and pat[][] matrix.
    Apply Rabin-Karp Algorithm by finding hash values for the column hashes found in step 1.
    If a match is found compare txt[][] and pat[][] matrices for the specific rows and columns.
    Else slide down the column hashes by 1 row in the txt matrix using a rolling hash.
    Repeat steps 2 to 4 for all the hash values and if we found any pat[][] match in txt[][] then print the indices of top most cell in the txt[][].

To find the hash value: In order to find the hash value of a substring of size N in a text using rolling hash follow below steps:  

    Remove the first character from the string: hash(txt[s:s+n-1])-(radix**(n-1)*txt[s])%prime_number
    Add the next character to the string: hash(txt[s:s+n-1])*radix + txt[n]

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<vector<char>> txt{{'A', 'B', 'C', 'D', 'E'}, {'A', 'B', 'C', 'D', 'E'}, {'A', 'B', 'C', 'D', 'E'}, {'A', 'B', 'C', 'D', 'E'}, {'A', 'B', 'C', 'D', 'E'}};
    vector<vector<char>> pat{{'A', 'B', 'C', 'D', 'E'}, {'A', 'B', 'C', 'D', 'E'}, {'A', 'B', 'C', 'D', 'E'}, {'A', 'B', 'C', 'D', 'E'}};
    return 0;
}