// Factorials of large numbers
// MediumAccuracy: 51.61%Submissions: 50440Points: 4
// Given an integer N, find its factorial.

// Example 1:

// Input: N = 5
// Output: 120
// Explanation : 5! = 1*2*3*4*5 = 120
// Example 2:

// Input: N = 10
// Output: 3628800
// Explanation :
// 10! = 1*2*3*4*5*6*7*8*9*10 = 3628800

// https://www.geeksforgeeks.org/factorial-large-number/

#include <bits/stdc++.h>

using namespace std;

#define MAX 500

int multiply(int x, int res[], int res_size);

void factorial(int n)
{
    int res[MAX];
    res[0] = 1;
    int res_size = 1;

    for (int i = 2; i <= n; i++)
        res_size = multiply(i, res, res_size);

    cout << "Factorial of given number is: \n";
    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

int main()
{
    factorial(100);
    return 0;
}