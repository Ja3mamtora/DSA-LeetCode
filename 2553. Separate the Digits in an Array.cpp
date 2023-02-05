class Solution {
public:
    
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            stack<int>sub;
            while(n>0){
                int r=n%10;
                sub.push(r);
                n=n/10;
            }
            while(sub.size()>0){
                ans.push_back(sub.top());
                sub.pop();
            }
            
        }
        return ans;
    }
};