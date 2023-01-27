class Solution {
public:
long long MOD = 1000000007;
long long rev(int n){long long r=0;
    while(n>0){
r=r*10+n%10;
n=n/10;
    }
    return r;
}
    int countNicePairs(vector<int>& nums) {
        unordered_map<int ,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int curr=(nums[i]-rev(nums[i]));
                mp[curr]++;
                ans=(ans+mp[curr]-1)%MOD;
        }      
        return ans;
    }
};