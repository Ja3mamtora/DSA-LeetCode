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
    void helper(TreeNode* r,vector<vector<int>>&x,int ts,vector<int>&ds){
        if(r==NULL)return;
        ds.push_back(r->val);
        ts=ts-r->val;
         if(r->left==NULL && r->right==NULL && ts==0){
            x.push_back(ds);
       }
       helper(r->left,x,ts,ds);
       helper(r->right,x,ts,ds);
       ds.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>xyz;
        if(root==NULL)return xyz;
        vector<int>ds;
        helper(root,xyz,targetSum,ds);
        return xyz;
    }
};