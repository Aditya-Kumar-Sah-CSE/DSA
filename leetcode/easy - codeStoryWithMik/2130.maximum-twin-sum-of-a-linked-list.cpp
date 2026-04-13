/*
 * @lc app=leetcode id=2130 lang=cpp
 *
 * [2130] Maximum Twin Sum of a Linked List
 */

// @lc code=start
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
    int pairSum(ListNode* head) {
        //! Approach 1: store values in vector
        // vector<int> v;
        // ListNode* temp = head;
        // while (temp!=NULL)
        // {
        //     v.push_back(temp->val);
        //     temp=temp->next;
        // }
        
        // int n=v.size();
        // int left=0 , right = n-1;
        // int sum =0;
        // while (left<right)
        // {
        //     sum = max(sum,v[left]+v[right]);
        //     left++;
        //     right--;
            
        // }
        // return sum;

// !Approach 2: using stack 

// ListNode* temp = head;
// ListNode* slow = head;
// ListNode* fast = head;
// int sum =0;
// stack<int> st;
// while(temp){
//     st.push(temp->val);
//     temp=temp->next;
// }
// while (fast&&fast->next)
// {
//     sum=max(sum,st.top() + slow->val);
//     slow=slow->next;
//     fast=fast->next->next;
    

//     st.pop();
    

// }


// return sum;

        // !Approach 3 : reverse the second half 


      
ListNode* slow = head;
ListNode* fast = head;
int sum =0;

// find mid
while (fast&&fast->next)
{
    slow=slow->next;
    fast=fast->next->next;
}
ListNode* mid = slow;
// reverse 2nd node 
ListNode* prev = NULL;
ListNode* nextNode = NULL;

while (mid)
{
    nextNode = mid->next;
    mid->next= prev;
    prev=mid;
    mid=nextNode;
}

// find max

ListNode* curr = head;
while(prev){
sum= max(sum,curr->val+prev->val);
curr=curr->next;
prev= prev->next;
}


return sum;
    }
};
// @lc code=end

