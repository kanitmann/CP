#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[20];
    int flag = 1;
    cin >> str;
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        if (str[i] != str[l - 1 - i])
            flag = 0;
    }
    if (flag == 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}