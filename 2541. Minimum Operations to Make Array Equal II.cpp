class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {long long s1=0,s2=0;
        for(int i=0;i<nums1.size();i++){
            s1=s1+nums1[i];
            s2=s2+nums2[i];
        }
        if(s1!=s2)return -1;
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