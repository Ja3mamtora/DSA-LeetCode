class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>ans(word.length());
        long long t=0;
        for(int i=0;i<word.length();i++){
            t=(t*10+(word[i]-'0'))%m;
            if(t==0)ans[i]=1;
        }
        return ans;
    }
};