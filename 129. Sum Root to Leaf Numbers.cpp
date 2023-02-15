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
    int arry(vector<int>ds){
        int n=ds.size();
        int x=0;
        for(int i=0;i<ds.size();i++){
            x=x+(ds[i]*(pow(10,n-1)));
            n--;
        }
        return x;
    }
    void helper(TreeNode *r,int& ans,vector<int>&ds){
        if(r==NULL)return ;
        ds.push_back(r->val);
        if(r->left==NULL && r->right==NULL){
            ans=ans+arry(ds);
        }
        helper(r->left,ans,ds);
        helper(r->right,ans,ds);
        ds.pop_back();
    }
    int sumNumbers(TreeNode* root) {
        if (root==NULL)return 0;
        vector<int>ds;
        int ans=0;
        helper(root,ans,ds);
        return ans;

    }
};