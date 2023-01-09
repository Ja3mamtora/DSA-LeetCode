class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0,maxi=INT_MIN;
        for(auto x:nums){
            s=s+x;
            maxi=max(maxi,s);
            if(s<0)s=0;
        }
        return maxi;
    }
};