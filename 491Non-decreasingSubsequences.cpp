class Solution {
public:
    void incrsubseq(int ind,vector<int>&a,set<vector<int>>&ans,vector<int>&ds,int p){
        if(ind==a.size()){
            if(ds.size()>=2){
                ans.insert(ds);
            }
            return;
        }
        if(a[ind]>=p){
            ds.push_back(a[ind]);
            incrsubseq(ind+1,a,ans,ds,a[ind]);
            ds.pop_back();
        }
        incrsubseq(ind+1,a,ans,ds,p);
        
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>ds;
        set<vector<int>>ans;
        incrsubseq(0,nums,ans,ds,INT_MIN);
        vector<vector<int>>an;
        for(auto x:ans)
        an.push_back(x);
        return an;
    }
};