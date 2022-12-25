class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0,j=0,c=0,ans=0,n=nums.size();
        while(j<n){
            if(nums[j] %2 != 0) c++;
            if(c==k){
            int t=i;
            ans++;
            while(nums[i++] % 2 == 0){
                    ans++;
                }
             i=t;
            }
            else if(c>k){
                while(c>k){
                    if(nums[i++]%2 != 0)c--;
                }
                c--;
                j--;
            }
            j++;
        }
        return ans;
    }
};