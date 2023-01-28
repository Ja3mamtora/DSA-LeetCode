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
unsigned long long maxi=0,count=0;
    bool isCompleteTree(TreeNode* root) {
        helper(root,1);
        return count==maxi;
    }
    void helper(TreeNode* root,unsigned long long index){
        if(root==NULL)return;
        count++;
        maxi=max(maxi,index);
        helper(root->left,index*2);
        helper(root->right,index*2+1);
    }
};