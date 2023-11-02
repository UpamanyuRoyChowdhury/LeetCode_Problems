/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        if(head == nullptr)
        {
            return nullptr;
        }

        //check the length of linkedlist each time the recursion function is called
        ListNode * length = head;
        int n = 0;
        while(length != nullptr)
        {
            n++;
            length = length->next;
        }
        if(n < k)
        {
            return head;
        }
        
        //Iteratively reverse first k nodes
        ListNode * curr = head;
        ListNode * prev = NULL;
        ListNode * forw = NULL;
        int count = 0;
        while(curr != nullptr && count < k)
        {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
            count++;
        }

        //Recursion call 
        head->next = reverseKGroup(forw, k);
        
        //return reversed list
        return prev;
    }
};
