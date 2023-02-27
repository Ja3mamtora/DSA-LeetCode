class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        int n = nums.size(), ans = 0, i = 0, j = n/2;
        while(i < n/2 && j < n) {
            if(nums[i] * 2 <= nums[j]) ans += 2, i++, j++;
            else j++;
        }
        return ans;
    }
};