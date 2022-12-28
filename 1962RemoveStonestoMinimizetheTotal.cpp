class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto x : piles)
        pq.push(x);
        for(int i=0;i<k;i++){
            int top=pq.top();
            pq.pop();
            if(top%2==0)top=top/2;
            else top=top/2+1;
            pq.push(top);
        }
        int ans=0;
        while(pq.size()){ans=ans+pq.top();pq.pop();}
        return ans;
    }
};