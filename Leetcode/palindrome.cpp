#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

bool isPalindrome(int x)
{
    char str[20];
    bool flag = true;
    cin >> str;
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        if (str[i] != str[l - 1 - i])
            flag = false;
    }
    return flag;
}

int main()
{
    bool ans = isPalindrome(1871);
    cout << ans;
    return 0;
}