/*
 * @lc app=leetcode id=958 lang=cpp
 *
 * [958] Check Completeness of a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int countNode(TreeNode* root){
if (root == NULL)
{
    return 0;
}
return 1+ countNode(root->left) + countNode(root->right);

}

bool dfs(TreeNode* root , int i,int tNode){
    if (root== NULL)
    {
        return true;
    }

    if (i>tNode)
    {
        return false;
    }
    
    return dfs(root->left,2*i,tNode) && dfs(root->right,2*i +1,tNode);
    
}

    bool isCompleteTree(TreeNode* root) {
        // BFS-if left is NULL but right child is their !!
        // 1. queue use krna h 
        // if past me null dhekha to tu kha se aa gya bsdi
//! Approach 1 - BFS

        // queue<TreeNode*>que;

        // que.push(root);

        // bool past = false;

        // while (!que.empty())
        // {
        //     TreeNode* node = que.front();
//             que.pop();

//             if(node == NULL) past = true;
//             else{
//                 if(past == true)
//                 return false;

//                 que.push(node->left);
//                 que.push(node->right);
//             }
//         }
        


// return true;

//! Approach 2 - DFS -binary tree ko array me fill kr sakte h - left ka index = 2*i and right child me 2*i + 1

// if max-index > number of node = [7,1,3,8,9,NULL,7]

int tNode= countNode(root);
int i=1;
return dfs(root,i,tNode);
    }
};
// @lc code=end

