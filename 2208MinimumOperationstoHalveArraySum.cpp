class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double>pq;
        int ans=0;
        double s=0;
        for(auto x : nums){
            s=s+x;
            pq.push(x);
        }
        double n = s/2.00000;
        while(s>n){
            double top=pq.top();
            pq.pop();
            top=top/2.000000;
            s=s-top;
            pq.push(top);
            ans++;
        } 
        return ans;
    }
};