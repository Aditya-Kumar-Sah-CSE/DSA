/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // why slow and fast always meet at cycle starting 

        // slow = l1 + l2 
        // fast = l1+ l2 + nk ;


        // fast = 2 x slow 
        // l1 + l2 + nk = 2(l1 + l2)
        // l1 = nk -l2
if(head == NULL || head->next == NULL) return NULL;

ListNode* slow = head;
ListNode* fast = head;

while (fast!=NULL && fast->next !=NULL)
{
    slow = slow->next;
    fast = fast->next->next;
    if(slow==fast)
    break;
}

if(slow!=fast) return NULL;


ListNode* p = head;
while(p!=slow){
    p=p->next;
    slow=slow->next;
}
return p;

    }
};
// @lc code=end

