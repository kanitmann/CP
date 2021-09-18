/*
Reverse a linked list

    Difficulty Level : Medium

 

Given pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing the links between nodes.

Examples: 

    Input: Head of following linked list 
    1->2->3->4->NULL 
    Output: Linked list should be changed to, 
    4->3->2->1->NULL

    Input: Head of following linked list 
    1->2->3->4->5->NULL 
    Output: Linked list should be changed to, 
    5->4->3->2->1->NULL

    Input: NULL 
    Output: NULL


    Input: 1->NULL 
    Output: 1->NULL 


Iterative Method 

        Initialize three pointers prev as NULL, curr as head and next as NULL.
        Iterate through the linked list. In loop, do following. 
        // Before changing next of current, 
        // store next node 
        next = curr->next
        // Now change next of current 
        // This is where actual reversing happens 
        curr->next = prev 
        // Move prev and curr one step forward 
        prev = curr 
        curr = next

        Time Complexity: O(n) 
        Space Complexity: O(1)

Recursive Method: 

    1) Divide the list in two parts - first node and 
      rest of the linked list.
    2) Call reverse for the rest of the linked list.
    3) Link rest to first.
    4) Fix head pointer

    Time Complexity: O(n) 
    Space Complexity: O(1)
*/


