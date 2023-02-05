class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxsum) {
       
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto x:banned)
            mp[x]++;
        for(int i=1;i<=n;i++){
            if(mp.find(i)!=mp.end())
                continue;
            else
                ans.push_back(i);
        }
        int s=0,c=0;
        for(int i=0;i<ans.size();i++){
            
            s=s+ans[i];
            if(s>maxsum)break;
            c++;
            
        }
        return c;
    }
};