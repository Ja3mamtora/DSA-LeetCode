class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int f=0;
        unordered_map<int,int>m;
        for(auto x : nums)m[x]++;
        for(int i=1;i<m.size()+3;i++){
            if(m[i]==0){
                return i;
            }
        }
        return m.size();
    }
};