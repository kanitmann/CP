#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &nums, int l, int x = 5)
{
    bool found = false;
    while (found != true)
    {
        int start = 0;
        int end = l - 1;
        if (start > end)
        {
            return -1;
        }
        int mid = start + (end - start) / 2;

        if (nums[mid] > x)
            end = mid - 1;
        else if (nums[mid] < x)
            start = mid + 1;
        else if (nums[mid] == x)
        {
            found = true;
            return mid+1;
        }
    }
    return 0;
}

int main()
{
    vector<int> nums = {2, 3, 5, 6, 9, 12};
    int l = nums.size();
    int pos = search(nums, l);
    if (pos == -1)
        cout << "Element not found";
    else
        cout << "Element found at position: " << pos;
    return 0;
}