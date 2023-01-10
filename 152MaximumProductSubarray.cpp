class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int ans=nums[0];
       for(int i=1,maxi=ans,mini=ans;i<nums.size();i++){
           if(nums[i]<0)
           swap(maxi,mini);
           maxi=max(nums[i],nums[i]*maxi);
           mini=min(nums[i],nums[i]*mini);
           ans=max(ans,maxi);
           
       }
       return ans;
    }
};