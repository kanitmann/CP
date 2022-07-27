#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);

    list<int>::iterator it = lst.begin();
    while (it != lst.end())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}