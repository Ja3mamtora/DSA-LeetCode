class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        if(nums1 == nums2)
            return 0;
        if(nums1 != nums2 && k==0)
            return -1;
        long long c = 0;
        long long nu = 0;
        for(int i=0;i<nums1.size();i++)
        {
            if(abs(nums1[i] - nums2[i]) % k == 0)
            {
                nu += (nums1[i] - nums2[i]) / k;
                c += abs(nums1[i] - nums2[i]) / k;
            }
        }
        if(c && !nu)
            return c/2;
        return -1;
    }
};