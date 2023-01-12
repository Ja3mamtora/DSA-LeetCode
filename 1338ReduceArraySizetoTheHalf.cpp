class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr)
        mp[x]++;
        vector<int>freq;
        for(auto x:mp){
            freq.push_back(x.second);
        }
        sort(freq.begin(),freq.end());
        reverse(freq.begin(),freq.end());
        int c=0;
        int l=arr.size();
        int i=0;
        while(l>arr.size()/2){
            l=l-freq[i];
            c++;
            i++;
        }
        return c;
    }
};