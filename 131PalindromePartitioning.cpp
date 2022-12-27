class Solution {
public:
    bool ispalindrome(string s,int i,int j){
        if(i==j)return 1;
    
            while(i<j){
                if(s[i]!=s[j])
                return 0;
                i++;j--;
            }
        return 1;
    }
    void helper(vector<vector<string>>&ans,vector<string> &ds,string s,int ind){
        if(ind==s.length() && ds.size()>0){
            ans.push_back(ds);
        }
        else{
            for(int i=ind;i<s.length();i++){
                if(ispalindrome(s,ind,i)){
                    ds.push_back(s.substr(ind,i-ind+1));
                    helper(ans,ds,s,i+1);
                    ds.pop_back();
                }
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        helper(ans,ds,s,0);
        return ans;
    }
};