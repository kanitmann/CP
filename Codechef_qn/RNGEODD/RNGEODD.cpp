#include <iostream>

using namespace std;

int main()
{
    int t1, t2;
    cin >> t1 >> t2;
    if (t1 % 2 == 0)
    {
        t1 = t1 + 1;
    }
    for (int i = t1; i <= t2; i = i + 2)
        cout << i << " ";
    return 0;
}