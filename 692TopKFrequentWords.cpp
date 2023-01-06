class Solution {
public:
static bool cmp(pair<string , int> a , pair<string, int> b){
        if (a.second>b.second)
        return true;
        if(a.second==b.second && a.first<b.first)
        return true;
        return false;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
        map<string,int>mp;
        for(auto x: words){
            mp[x]++;
        }
        vector<pair<string,int>>st;
        for(auto it:mp){
            st.push_back(it);
        }
        sort(st.begin() , st.end() , cmp);
        for(int i=0 ; i<k ; i++){
            ans.push_back(st[i].first);
        }
        return ans;
    }
};