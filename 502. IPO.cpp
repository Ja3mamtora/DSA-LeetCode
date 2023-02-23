class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int, int>>mp(n);
        for (int i = 0; i < n; i++) {
            mp[i] = {capital[i], profits[i]};
        }
        
        sort(mp.begin(), mp.end());
        int i = 0;
        priority_queue<int> maxi;
        while (k--) {
           
            while (i < n && mp[i].first <= w) {
                maxi.push(mp[i].second);
                i++;
            }
            if (maxi.empty())
                break;
            w += maxi.top();
            maxi.pop();
        }
        return w;
    }
};