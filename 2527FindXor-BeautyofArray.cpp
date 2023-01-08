class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int sum=0;
        for(auto x:nums)
        sum=sum^x;
        return sum;
    }
};