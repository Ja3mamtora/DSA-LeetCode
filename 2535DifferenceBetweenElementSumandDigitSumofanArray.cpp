class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s=0,as=0;
        for(auto x:nums){
            s=s+x;
        }
        for(int i=0; i<nums.size(); i++){
            int n = nums[i];
            while(n > 0){
                int r = n % 10;
                as += r;
                n /= 10;
            }
        }
        return abs(s-as);
    }
};