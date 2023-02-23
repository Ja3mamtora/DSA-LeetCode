class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        reverse(satisfaction.begin(),satisfaction.end());
        int sum=0,ans=0;
        for(int i=0;i<satisfaction.size();i++){
            sum=sum+satisfaction[i];
            if(sum<0)continue;
            ans=ans+sum;
        }
        return ans;
    }
};