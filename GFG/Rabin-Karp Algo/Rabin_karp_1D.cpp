/*  
https://www.geeksforgeeks.org/rabin-karp-algorithm-for-pattern-searching/

Rabin-Karp Algorithm for Pattern Searching

    Difficulty Level : Medium
    Last Updated : 04 Sep, 2021

 

Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[]) that prints all occurrences of pat[] in txt[]. You may assume that n > m.

Examples: 

Input:  txt[] = "THIS IS A TEST TEXT"
        pat[] = "TEST"
Output: Pattern found at index 10

Input:  txt[] =  "AABAACAADAABAABA"
        pat[] =  "AABA"
Output: Pattern found at index 0
        Pattern found at index 9
        Pattern found at index 12
*/

#include <iostream>
#include <string.h>

using namespace std;

#define d 256

void search(char pat[], char txt[], int q)
{
        int M = strlen(pat);
        int N = strlen(txt);
        int i, j;
        int p = 0;
        int t = 0;
        int h = 1;

        for (i = 0; i < M - 1; i++)
                h = (h * d) % q;

        for (i = 0; i < M; i++)
        {
                p = (d * p + pat[i]) % q;
                t = (d * t + txt[i]) % q;
        }

        for (i = 0; i <= N - M; i++)
        {
                if (p == t)
                {
                        bool flag = true;
                        for (j = 0; j < M; j++)
                        {
                                if (txt[i + j] != pat[j])
                                {
                                        flag = false;
                                        break;
                                }
                        }
                        if (j == M)
                                cout << "Pattern found at index " << i << endl;
                }
                if (i < N - M)
                {
                        t = (d * (t - txt[i] * h) + txt[i + M]) % q;

                        if (t < 0)
                                t = (t + q);
                }
        }
}

int main()
{

        char text[] = "AABAACAADAABAABA";
        char pattern[] = "AABA";

        int primen = 101;

        search(pattern, text, primen);
        return 0;
}