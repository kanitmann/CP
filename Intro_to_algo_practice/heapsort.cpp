// Heap Sort (Time complexity : O(nlgn))

// How is Binary Heap represented?
// A Binary Heap is a Complete Binary Tree. A binary heap is typically represented as an array.

// The root element will be at Arr[0].
// Below table shows indexes of other nodes for the ith node, i.e., Arr[i]:
// Arr[(i-1)/2]	Returns the parent node
// Arr[(2*i)+1]	Returns the left child node
// Arr[(2*i)+2]	Returns the right child node

// Application of heap:
// 1. Priority Queue (e.g., min-heap, max-heap etc)
// 2. Heap Sort
// 3. Graph algorithms (e.g., dijkstra's algorithm)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 4, 7, 8};
    make_heap(v1.begin(), v1.end()); // default is max_heap
    cout << "Heap: ";
    for (auto i : v1)
        cout << i << " ";

    cout << "\nMax element: " << v1.front();
    return 0;

    // sort
    sort_heap(v1.begin(), v1.end());
    cout << "Sorted: ";
    for (auto i : v1)
        cout << i << " ";
}