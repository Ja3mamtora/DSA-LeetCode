class Solution {
public:
    long long maxKelements(vector<int>& piles, int k) {
        priority_queue<long long>pq;
        for(auto x : piles)
        pq.push(x);
        long long ans=0;
        for(int i=0;i<k;i++){
            long long top=pq.top();
            ans=ans+top;
            pq.pop();
            if(top%3==0)top=top/3;
            else top=top/3+1;
            pq.push(top);
        }
        return ans;
    }
};