class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>maxr;
        vector<int>maxl;
        maxr.push_back(nums[0]);
        int p=nums[0];
        for(int i=1;i<nums.size();i++){
            p=p*nums[i];
            maxr.push_back(p);
        }
        int q=nums[nums.size()-1];
        maxl.push_back(q);
        for(int i=nums.size()-2;i>=0;i--){
            q=q*nums[i];
            maxl.push_back(q);
        }
        reverse(maxl.begin(),maxl.end());
        vector<int>ans;
        ans.push_back(maxl[1]);
        for(int i=1;i<nums.size()-1;i++){
            ans.push_back(maxr[i-1]*maxl[i+1]);
        }
        ans.push_back(maxr[nums.size()-2]);
        return ans;
    }
};