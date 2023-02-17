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
    TreeNode *prev=NULL;
    int ans=INT_MAX;
    void helper(TreeNode *r){
        if(r->left)helper(r->left);
        if(prev)ans=min(ans,abs(r->val-prev->val));
        prev=r;
        if(r->right)helper(r->right);
    }
    int minDiffInBST(TreeNode* root) {
        helper(root);
        return ans;
    }
};